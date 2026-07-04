#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, y, i, ans;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        vector<long long> a, b;

        while (x)
            a.push_back(x % 2), x /= 2;
        while (a.size() < 32)
            a.push_back(0);
        while (y)
            b.push_back(y % 2), y /= 2;
        while (b.size() < 32)
            b.push_back(0);
        ans = 0;
        for (int i = 0; i < 32 && (a[i] == b[i]); i++) ans++;
        cout << (1ll << ans) << "\n";
    }

    return 0;
}