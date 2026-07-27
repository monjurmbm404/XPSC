#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k, n, sum = 0, mid, l, r, ans;
    cin >> k >> n;
    vector<long long> v(n);
    for (long long &x : v)
        cin >> x, sum += x;

    auto ok = [&](long long mid)
    {
        long long can = 0;
        for (long long x : v)
            can += min(x, mid);
        return can >= mid * k;
    };
    l = 0, r = sum / k;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
            ans = mid,
            l = mid + 1;
        else
            r = mid - 1;
    }

    cout << ans;

    return 0;
}