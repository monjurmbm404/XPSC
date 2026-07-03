#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        cin >> a >> b >> c;

        if (a + b + c >= 2)
            ans++;
    }
    cout << ans;

    return 0;
}