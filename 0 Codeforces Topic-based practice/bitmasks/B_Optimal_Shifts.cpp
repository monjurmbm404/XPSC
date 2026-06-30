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
        string s;
        cin >> n >> s;

        s = s + s;

        int ans = 0, cnt = 0;

        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == '0')
            {
                while (i < 2 * n && s[i] == '0')
                {
                    cnt++;
                    i++;
                }
                ans = max(ans, cnt);
                cnt = 0;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}