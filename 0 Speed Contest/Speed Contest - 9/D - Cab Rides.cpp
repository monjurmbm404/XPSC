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
        int ans = 0;

        int full_cab = n / 4;
        

        ans = 400 * full_cab;

        int rest = n - (full_cab * 4);
        if (rest > 0)
            ans += max(200, 100 * rest);

        if (rest == 1 && n != 1)
        {
            ans -= 100;
        }
        cout << ans << "\n";
    }

    return 0;
}