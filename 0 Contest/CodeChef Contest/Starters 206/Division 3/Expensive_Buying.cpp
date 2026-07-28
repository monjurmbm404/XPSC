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

        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        sort(v.rbegin(), v.rend());
        int ans = 0;
        for (int i = 0; i < k; i++)
            ans += v[i];

        cout << ans << "\n";
    }

    return 0;
}