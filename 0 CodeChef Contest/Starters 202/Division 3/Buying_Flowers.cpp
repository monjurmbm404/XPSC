#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, divisor;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ans = (n / 3) * 5;
        n -= (n / 3) * 3;
        if (n == 2)
            ans += 4;
        else if (n == 1)
            ans += 3;

        cout << ans << "\n";
    }

    return 0;
}