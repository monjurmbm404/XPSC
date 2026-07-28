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
        int n, k;
        cin >> n >> k;

        vector<long long> v(n + 1), pre(n + 1, 0), mx(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> v[i], pre[i] = pre[i - 1] + v[i], mx[i] = max(mx[i - 1], v[i]);

        while (k--)
        {
            int val;
            cin >> val;
            int idx = upper_bound(mx.begin() + 1, mx.end(), val) - mx.begin() - 1;

            cout << pre[idx] << " ";
        }
        cout << "\n";
    }

    return 0;
}