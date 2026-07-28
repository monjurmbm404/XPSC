#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t, x, y, z, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b == 1)
            cout << "NO\n";
        else if (b == 2)
        {
            cout << "YES\n";
            x = a;
            y = 2 * a;
            z = 3 * a;
            cout << x << " " << y << " " << z << "\n";
        }
        else
        {
            cout << "YES\n";
            x = a;
            y = a * (b - 1);
            z = a * b;
            cout << x << " " << y << " " << z << "\n";
        }
    }

    return 0;
}