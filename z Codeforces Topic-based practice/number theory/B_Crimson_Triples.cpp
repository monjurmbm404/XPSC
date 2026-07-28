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
        long long n;
        cin >> n;

        long long ans = 0;
        for (long long i = 1; i <= n; i++)
            ans += ((n / i) * (n / i));

        cout << ans << "\n";
    }

    return 0;
}