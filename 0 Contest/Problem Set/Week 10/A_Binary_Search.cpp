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
        int key, l = 0, r = n - 1, mid;
        cin >> key;
        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key == v[mid])
            {
                found = true;
                break;
            }
            else if (key < v[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

        cout << (found ? "YES" : "NO") << "\n";
    }

    return 0;
}