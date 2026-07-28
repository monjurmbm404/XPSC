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
        long long n, m;

        cin >> n >> m;

        vector<long long> cnt1(33, 0);

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            for (int j = 0; j < 32; j++)
            {
                if ((x & 1) == 1)
                    cnt1[j]++;
                x = x >> 1;
            }
        }
        vector<long long> cnt2(33, 0);

        for (int i = 0; i < m; i++)
        {
            long long x;
            cin >> x;
            for (int j = 0; j < 32; j++)
            {
                if ((x & 1) == 1)
                    cnt2[j]++;
                x = x >> 1;
            }
        }
        long long ans = 0, x = 1;

        for (int i = 0; i < 32; i++)
        {
            if (cnt1[i] % 2 == 1)
                ans += x;
            x *= 2;
        }
        long long mn = ans;
        long long mx = ans;

        if (n % 2 == 1)
        {
            x = 1;
            for (int i = 0; i < 33; i++)
            {
                if (cnt2[i] > 0)
                {
                    if (cnt1[i] % 2 == 0)
                        mx += x;
                }
                x *= 2;
            }
        }
        else
        {
            x = 1;
            for (int i = 0; i < 33; i++)
            {
                if (cnt2[i] > 0)
                {
                    if (cnt1[i] % 2 == 1)
                        mn -= x;
                }
                x *= 2;
            }
        }

        cout << mn << " " << mx << "\n";
    }

    return 0;
}