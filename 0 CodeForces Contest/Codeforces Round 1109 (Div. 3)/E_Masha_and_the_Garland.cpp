#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, q, l, r, k;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> q >> s;
        s = '#' + s;
        vector<int> pre(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            if (s[i] == s[i - 1])
                pre[i] = 1;
            pre[i] += pre[i - 1];
        }
        while (q--)
        {

            cin >> l >> r >> k;
            int cnt = pre[r] - pre[l];

            cout << (((cnt + 1) / 2 <= k) ? "YES" : "NO") << "\n";
        }
    }

    return 0;
}