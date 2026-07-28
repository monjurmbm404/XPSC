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
        int l, a, b;

        cin >> l >> a >> b;

        int p = a, ans = a;

        for (int i = 0; i < l - 1; i++)
        {
            p = (p + b) % l;

            ans = max(ans, p);
        }

        cout << ans << "\n";
    }

    return 0;
}