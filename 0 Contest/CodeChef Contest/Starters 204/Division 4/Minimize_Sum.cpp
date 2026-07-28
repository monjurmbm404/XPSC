#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<int> v(n), cnt(m, 0);
        long long cur = 0;

        for (int &x : v)
        {
            cin >> x;
            cnt[x]++;
            cur += x;
        }

        long long ans = cur;

        for (int k = 0; k < m - 1; k++)
        {
            int wrap = cnt[m - 1 - k];

            cur = cur + n - 1LL * wrap * m;

            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}
