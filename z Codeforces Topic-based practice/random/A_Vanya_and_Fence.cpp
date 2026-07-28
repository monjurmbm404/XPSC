#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, x, ans = 0;
    cin >> n >> k;

    while (n--)
    {
        cin >> x;
        if (x > k)
            ans += 2;
        else
            ans++;
    }
    cout << ans;

    return 0;
}