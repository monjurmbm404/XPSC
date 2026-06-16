#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r >> b;

    int g = min(r, b);

    int ans = g * 5 + (r - g) + ((b - g) * 2);
    cout << ans;

    return 0;
}