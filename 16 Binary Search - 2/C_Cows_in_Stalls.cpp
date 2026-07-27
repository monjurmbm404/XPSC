#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, mid;
    cin >> n >> k;

    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    auto ok = [&](int mid)
    {
        int cnt = 1, lastPos = v[0];
        for (int i = 1; i < n; i++)
            if (v[i] - lastPos >= mid)
                cnt++, lastPos = v[i];
        return cnt >= k;
    };

    int l = 1, r = v[n - 1] - v[0], ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    cout << ans << "\n";

    return 0;
}