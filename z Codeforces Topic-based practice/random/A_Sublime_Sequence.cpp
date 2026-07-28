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
        int x, n, ans = 0;
        cin >> x >> n;
        cout << ((n & 1) ? x : 0) << "\n";
    }

    return 0;
}