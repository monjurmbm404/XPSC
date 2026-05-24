// problem link: https://www.codechef.com/problems/HIGHSCORE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, ans, x;
    cin >> t;
    while (t--)
    {
        ans = 0, cin >> n;
        for (int i = 0; i < 4; i++)
        {
            cin >> x;
            if (x <= n)
                ans = max(ans, x);
        }
        cout << ans << "\n";
    }

    return 0;
}