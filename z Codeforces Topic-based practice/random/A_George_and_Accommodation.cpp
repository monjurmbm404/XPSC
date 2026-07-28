#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y, ans = 0;
    cin >> n;

    while (n--)
    {
        cin >> x >> y;
        if (y - x >= 2)
            ans++;
    }
    cout << ans;

    return 0;
}