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
        int n, k;
        cin >> n >> k;

        int res = 0;
        for (int t = 1; t <= (1 << 25); t *= 2)
        {
            if (t * k <= n)
            {
                n -= t * k;
                res += k;
            }
            else
            {
                res += n / t;
                break;
            }
        }
        cout << res << "\n";
    }

    return 0;
}