#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> n;
        cout << ((x / 10) * n) << "\n";
    }

    return 0;
}