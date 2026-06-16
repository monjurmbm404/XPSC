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
        int odd = 0;
        for (int &x : v)
        {
            cin >> x;
            ;
            if (x % 2 == 1)
                odd++;
        }
        if (odd == 0)
            cout << 0 << "\n";
        else
        {
            int ans = n - odd;
            ans += odd / 2;
            if (odd % 2 == 1)
                ans++;
            cout << ans << "\n";
        }
    }

    return 0;
}