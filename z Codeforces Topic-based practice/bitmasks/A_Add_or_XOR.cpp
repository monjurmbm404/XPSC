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
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (b <= a - 2)
        {
            cout << -1 << '\n';
            continue;
        }

        if (b == a - 1)
        {
            if ((a ^ 1) == b)
                cout << y << '\n';
            else
                cout << -1 << '\n';
            continue;
        }

        if (a == b)
        {
            cout << 0 << '\n';
            continue;
        }

        int oe = 0, eo = 0;

        if ((b - a) % 2 == 0)
        {
            oe = eo = (b - a) / 2;
        }
        else if (a & 1)
            oe = (b - a + 1) / 2, eo = (b - a) / 2;
        else
            oe = (b - a) / 2, eo = (b - a + 1) / 2;

        cout << 1LL * oe * x + 1LL * eo * min(x, y) << '\n';
    }

    return 0;
}