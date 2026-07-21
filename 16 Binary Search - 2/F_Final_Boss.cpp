#include <bits/stdc++.h>
using namespace std;

bool good(long long m, long long n, long long h, vector<long long> &a, vector<long long> &c)
{
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = min(cnt + (1 + (m - 1) / c[i]) * a[i], h);
    }
    return cnt >= h;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long h, n;
        cin >> h >> n;

        vector<long long> a(n), c(n);

        for (long long &x : a)
            cin >> x;
        for (long long &x : c)
            cin >> x;

        long long l = 0, r = 1; 
        // long long r = LLONG_MAX;

        while (!good(r, n, h, a, c))
            r *= 2;

        while (l + 1 < r)
        {
            long long m = l + (r - l) / 2;

            if (good(m, n, h, a, c))
                r = m;
            else
                l = m;
        }

        cout << r << "\n";
    }

    return 0;
}