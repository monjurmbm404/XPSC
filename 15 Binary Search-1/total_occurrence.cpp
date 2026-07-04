#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    while (q--)
    {
        int key;
        cin >> key;

        // first occurrence
        int l = 0, r = n - 1;
        int first_occ = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] == key)
            {
                first_occ = mid;
                r = mid - 1;
            }
            else if (v[mid] < key)
                l = mid + 1;
            else
                r = mid - 1;
        }

        // last occurrence
        l = 0, r = n - 1;
        int last_occ = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] == key)
            {
                last_occ = mid;
                l = mid + 1;
            }
            else if (v[mid] < key)
                l = mid + 1;
            else
                r = mid - 1;
        }

        if (first_occ == -1)
            cout << 0 << "\n";
        else
            cout << (last_occ - first_occ + 1) << "\n";
    }

    return 0;
}