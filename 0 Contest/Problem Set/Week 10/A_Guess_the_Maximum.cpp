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
        int n, ans = INT_MAX;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        for (int i = 1; i < n; i++)
            ans = min(ans, max(v[i], v[i - 1]));

        cout << ans - 1 << "\n";
    }

    return 0;
}