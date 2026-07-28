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
        long long n, k;
        cin >> n >> k;

        if (k == 1)
        {
            cout << n << "\n";
            continue;
        }

        long long ans = 0;

        while (n > 0)
        {
            long long x = k;

            if (x > n)
                break;

            while (x * k <= n)
                x *= k;

            long long n1 = n;
            long long cnt = n1 / x;

            ans += cnt;
            n -= cnt * x;
        }

        cout << ans + n << "\n";
    }

    return 0;
}