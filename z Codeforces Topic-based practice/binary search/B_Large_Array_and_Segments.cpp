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
        long long n, k, x;
        cin >> n >> k >> x;
        vector<long long> a(n);
        for (long long &val : a)
            cin >> val;

        long long s = accumulate(a.begin(), a.end(), 0LL);

        if (x > k * s)
        {
            cout << 0 << "\n";
            continue;
        }

        long long xm = x % s;
        long long q = x / s;
        if (xm == 0)
        {
            q--;
            xm = s;
        }

        long long ans = n * k - q * n;

        long long suf = 0;
        for (long long i = n - 1; i >= 0; i--)
        {
            suf += a[i];
            if (suf >= xm)
                break;
            ans--;
        }

        cout << ans << "\n";
    }

    return 0;
}