#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    long long l, r, mid, ans, cnt;
    cin >> n >> k;

    vector<int> v(n);

    for (int &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    auto ok = [&](long long medium)
    {
        cnt = 0;
        for (int i = n / 2; i < n; i++)
            cnt += v[i] < medium ? medium - v[i] : 0;

        return cnt <= k;
    };

    l = 1, r = 2e9;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    cout << ans;

    return 0;
}