#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, q, sugar;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        vector<int> v(n), prefix_sum(n + 1, 0);
        for (int &x : v)
            cin >> x;

        sort(v.rbegin(), v.rend());

        for (int i = 1; i <= n; i++)
            prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
        while (q--)
        {
            cin >> sugar;
            auto it = lower_bound(prefix_sum.begin(), prefix_sum.end(), sugar);

            if (it == prefix_sum.end())
                cout << -1 << "\n";
            else
                cout << it - prefix_sum.begin() << "\n";
        }
    }

    return 0;
}