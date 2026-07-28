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
        long long n, a, b;
        cin >> n >> a >> b;
        long long ans = n * a;
        ans = min(ans, (n / 3) * b + (n % 3) * a);
        ans = min(ans, ((n + 2) / 3) * b);
        cout << ans << '\n';
    }

    return 0;
}
