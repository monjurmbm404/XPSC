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

        vector<long long> v(n);

        for (long long &x : v)
            cin >> x;

        long long G1 = 0, G2 = 0;

        // G1 -> odd index gcd
        // G2 -> even index gcd

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                G2 = gcd(G2, v[i]);
            else
                G1 = gcd(G1, v[i]);
        }

        long long ans = 0;

        bool ok = true;

        // check G2 against odd indices
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % G2 == 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            ans = G2;
        }
        else
        {
            ok = true;

            // check G1 against even indices
            for (int i = 0; i < n; i += 2)
            {
                if (v[i] % G1 == 0)
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
                ans = G1;
        }

        cout << ans << '\n';
    }

    return 0;
}