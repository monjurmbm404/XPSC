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

        if (Ajisai == Mai)
            cout << ans << '\n';
        else
        {
            for (int i = n - 1; i >= 0; i--)
                if (a[i] != b[i])
                {
                    if (i % 2 == 1)
                        ans = "Mai";
                    else
                        ans = "Ajisai";
                    break;
                }
            cout << ans << '\n';
        }
    }

    return 0;
}