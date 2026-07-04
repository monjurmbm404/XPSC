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
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long ab = lcm(a, b);
        long long ac = lcm(a, c);
        long long bc = lcm(b, c);
        long long abc = lcm(a, bc);

        long long A = (d / a) * 6 - (d / ab) * 3 - (d / ac) * 3 + (d / abc) * 2;
        long long B = (d / b) * 6 - (d / ab) * 3 - (d / bc) * 3 + (d / abc) * 2;
        long long C = (d / c) * 6 - (d / ac) * 3 - (d / bc) * 3 + (d / abc) * 2;

        cout << A << " " << B << " " << C << "\n";
    }

    return 0;
}