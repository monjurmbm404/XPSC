#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r,b;
    cin >> r >> b;
    int mn = min(r,b);
    int ans = mn *5;
    if(r > mn) ans += (r - mn) *1;
    if(b > mn) ans += (b - mn) *2;
    cout << ans;

    return 0;
}