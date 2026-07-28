#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        if (2 * l <= r)
            cout << l << " " << l * 2 << "\n";
        else
            cout << -1 << " " << -1 << "\n";
    }

    return 0;
}