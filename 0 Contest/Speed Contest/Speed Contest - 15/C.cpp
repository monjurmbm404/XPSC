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
        int n, m;
        cin >> n >> m;
        int destroyed = m % n;
        int make = n - m % n;
        if (n > m)
        {
            destroyed = make;
        }
        cout << min(destroyed, make) << "\n";
    }

    return 0;
}