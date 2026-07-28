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
        int n, Ajisai = 0, Mai = 0;
        string ans = "Tie";
        cin >> n;

        vector<int> a(n), b(n);

        for (int &x : a)
            cin >> x, Ajisai ^= x;
        for (int &x : b)
            cin >> x, Mai ^= x;

        for (int bit = 20; bit >= 0; bit--)
        {
            if ((Ajisai & (1 << bit)) == (Mai & (1 << bit)))
                continue;
            int lastIdx = -1;
            for (int i = n - 1; i >= 0; i--)
                if ((a[i] & (1 << bit)) != (b[i] & (1 << bit)))
                {
                    lastIdx = i;
                    break;
                }
            if (lastIdx != -1)
            {
                (lastIdx % 2 == 1) ? ans = "Mai" : ans = "Ajisai";
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}