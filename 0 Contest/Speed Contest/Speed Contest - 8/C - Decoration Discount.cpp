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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                ans = min(ans, ((v[j]) + v[i]));
        for (int i = 1; i < n; i++)
            ans = min(ans, ((v[i] / 2) + v[i - 1]));

        cout << ans << "\n";
    }

    return 0;
}