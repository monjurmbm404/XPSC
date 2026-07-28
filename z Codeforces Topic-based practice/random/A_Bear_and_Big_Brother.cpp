#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int ans = 0;

    while (true)
    {
        a *= 3;
        b *= 2;
        ans++;
        if (a > b)
            break;
    }

    cout << ans;
    return 0;
}