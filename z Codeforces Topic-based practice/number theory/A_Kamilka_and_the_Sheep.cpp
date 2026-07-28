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
        int n, x;
        cin >> n;

        int mx = INT_MIN, mn = INT_MAX;

        for (int i = 0; i < n; i++)
            cin >> x, mx = max(mx, x), mn = min(x, mn);

        cout << mx - mn << "\n";
    }

    return 0;
}