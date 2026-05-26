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
        int key, l = 0, r = n - 1, mid, ans = 0;
        cin >> key;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] <= key)
                l = mid + 1, ans = l;
            else
                r = mid - 1;
        }

        cout << ans << "\n";
    }

    return 0;
}