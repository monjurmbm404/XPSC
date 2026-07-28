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
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n, 0), b(k, 0);

        for (long long &x : a)
            cin >> x;
        for (long long &x : b)
            cin >> x;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long ans = 0;
        long long r = n - 1;

        for (long long i = 0; i < k && r >= 0; i++)
        {
            if (b[i] <= r + 1)
            {
                for (long long j = 0; j < b[i] - 1; j++)
                {
                    ans += a[r];
                    r--;
                }
                r--;
            }
            else
            {
                ans += a[r];
                r--;
            }
        }

        while (r >= 0)
        {
            ans += a[r];
            r--;
        }

        cout << ans << "\n";
    }

    return 0;
}