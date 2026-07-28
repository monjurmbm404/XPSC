// problem link: https://www.codechef.com/problems/BESTMOVIE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, ans, x, y;
    cin >> t;
    while (t--)
    {
        ans = INT_MAX;
        cin >> n;
        while (n--)
        {
            cin >> x >> y;
            if (x >= 7)
                ans = min(ans, y);
        }
        cout << ((ans == INT_MAX) ? -1 : ans) << "\n";
    }

    return 0;
}