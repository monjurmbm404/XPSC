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
        int k, n, x;
        cin >> k >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        sort(v.begin(), v.end());

        long long c = 0, ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] <= c)
                break;
            c += k - v[i];
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}