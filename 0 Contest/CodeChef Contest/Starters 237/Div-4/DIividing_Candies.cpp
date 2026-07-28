#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int ans = 0;
        for (int i = 0; i < n; i++)
            if (v[i] % x == 0)
                ans = max(ans, v[i]);

        cout << ans << endl;
    }
}
