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
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        for (int i = 1; i < n; i++)
        {
            int gcd = __gcd(v[i], v[i - 1]);
            if (gcd == abs(v[i] - v[i - 1]))
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}