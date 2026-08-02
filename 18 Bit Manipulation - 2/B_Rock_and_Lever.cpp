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
        int n, x;
        cin >> n;
        vector<int> cnt(30);
        for (int i = 0; i < n; i++)
            cin >> x, cnt[__lg(x)]++;
        long long ans = 0;
        for (int i = 0; i < 30; i++)
            ans += (1LL * cnt[i] * (cnt[i] - 1)) / 2;
        cout << ans << "\n";
    }

    return 0;
}