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
        int Chef = v[0];

        int ans = 0;
        for (int x : v)
            if (x >= Chef)
                ans++;
        cout << ans << "\n";
    }

    return 0;
}