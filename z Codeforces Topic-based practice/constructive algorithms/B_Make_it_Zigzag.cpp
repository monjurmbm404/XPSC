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
        int n, currentMax = 0, ans = 0; cin >> n;
        vector<int> v(n);
        for (int &x : v) cin >> x;
        for (int i = 0; i < n; i++) currentMax = max(currentMax, v[i]), ((i % 2 == 1) && (v[i] = currentMax));
        for (int i = 0; i < n; i++)
            if (i % 2 == 0)
            {
                int dif = v[i] - (min(((i > 0) ? v[i - 1] : INT_MAX), ((i + 1 < n) ? v[i + 1] : INT_MAX)) - 1);
                ((dif > 0) && (ans += dif));
            }
        cout << ans << "\n";
    }

    return 0;
}