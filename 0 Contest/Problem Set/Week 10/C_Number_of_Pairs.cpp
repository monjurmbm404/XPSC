#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, l, r, cnt = 0;
        cin >> n >> l >> r;

        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            long long x = v[i], y_min = l - x, y_max = r - x;

            int left = lower_bound(v.begin() + i + 1, v.end(), y_min) - v.begin();
            int right = upper_bound(v.begin() + i + 1, v.end(), y_max) - v.begin() - 1;
            cnt += (right - left + 1);
        }

        cout << cnt << "\n";
    }

    return 0;
}