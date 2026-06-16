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
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            if (x <= n)
                ans = max(ans, x);
        }
        cout << ans << "\n";
    }

    return 0;
}