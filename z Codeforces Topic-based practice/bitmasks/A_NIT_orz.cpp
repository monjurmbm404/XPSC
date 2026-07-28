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
        long long n, z, x, ans = INT_MIN;
        cin >> n >> z;
        for (int i = 0; i < n; i++)
            cin >> x, ans = max(ans, x | z);
        cout << ans << "\n";
    }

    return 0;
}