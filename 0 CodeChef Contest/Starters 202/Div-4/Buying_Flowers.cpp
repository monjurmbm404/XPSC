#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, divisor, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int temp = n;
        long long ans = 0;
        divisor = n / 3;
        ans += 5 * divisor;
        n -= (divisor * 3);
        if (n == 2)
            ans += 4;
        else if (n == 1)
            ans -= 5, ans += 8;
        cout << ans << "\n";
    }

    return 0;
}