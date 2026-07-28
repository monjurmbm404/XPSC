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
        long long x, y, z, a = 0, b = 0, c = 0;
        cin >> x >> y >> z;

        for (int i = 0; i < 30; i++)
        {
            if ((x >> i) & 1)
                a |= (1 << i), b |= (1 << i);
            if ((y >> i) & 1)
                b |= (1 << i), c |= (1 << i);
            if ((z >> i) & 1)
                a |= (1 << i), c |= (1 << i);
        }

        if ((a & b) == x && (b & c) == y && (a & c) == z)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}