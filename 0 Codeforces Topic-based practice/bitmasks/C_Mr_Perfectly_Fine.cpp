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
        int n;
        cin >> n;

        const int INF = 1e9;

        int a00 = INF, a01 = INF, a10 = INF, a11 = INF;

        while (n--)
        {
            int m;
            string s;
            cin >> m >> s;

            if (s == "00") a00 = min(a00, m);
            else if (s == "01") a01 = min(a01, m);
            else if (s == "10") a10 = min(a10, m);
            else if (s == "11") a11 = min(a11, m);
        }

        int ans = INF;

        if (a11 != INF)
            ans = min(ans, a11);

        if (a01 != INF && a10 != INF)
            ans = min(ans, a01 + a10);

        cout << (ans == INF ? -1 : ans) << '\n';
    }

    return 0;
}