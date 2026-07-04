#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n + 10);

        for (long long i = 1; i <= n; i++)
            cin >> v[i];

        map<long long, long long> mp;
        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 30; j >= 0; j--)
            {
                if ((1LL << j) & v[i])
                    mp[j]++;
            }
        }

        long long max1 = -1e18, need = v[1];

        for (long long i = 1; i <= n; i++)
        {
            long long ans = 0;
            map<long long, long long> mp1 = mp;
            for (long long j = 0; j <= 30; j++)
            {
                if ((1LL << j) & v[i])
                {
                    long long take = 1LL << j;

                    ans += ((n - mp1[j]) * take * 1ULL);
                    ans -= ((take * mp1[j]) * 1ULL);
                }
            }

            if (max1 <= ans)
            {
                max1 = ans;
                need = v[i];
            }
        }

        unsigned long long sum = 0;

        for (long long i = 1; i <= n; i++)
        {
            sum += v[i] ^ need;
        }

        cout << sum << "\n";
    }

    return 0;
}