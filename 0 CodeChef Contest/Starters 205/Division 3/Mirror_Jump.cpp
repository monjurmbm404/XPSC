#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << min(n - k, k) << '\n';
    }

    return 0;
}