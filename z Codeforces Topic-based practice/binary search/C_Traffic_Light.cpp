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
        char c;
        string s;
        cin >> n >> c >> s;

        s = s + s;

        if (c == 'g')
        {
            cout << 0 << "\n";
            continue;
        }

        bool f = false;
        int cnt = 0, res = 0;

        for (int i = 0; i < n + n; i++)
        {
            if (s[i] == 'g')
            {
                res = max(res, cnt);
                f = false;
            }

            if (s[i] == c && f == false)
            {
                f = true;
                cnt = 0;
            }

            if (f)
                cnt++;
        }

        cout << res << "\n";
    }

    return 0;
}