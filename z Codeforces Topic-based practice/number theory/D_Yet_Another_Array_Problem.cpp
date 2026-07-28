#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        long long n, ans = -1;  cin >> n;
        vector<long long> v(n);
        for (long long &x : v) cin >> x;
        bool flag = true;
        for (long long i = 2; i <= 100 && flag; i++)
            for (long long j = 0; j < n && flag; j++)
                if (__gcd(v[j], i) == 1)
                    ans = i, flag = false;
        cout << ans << "\n";
    }

    return 0;
}