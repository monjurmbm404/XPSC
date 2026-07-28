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
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) cin >> x, sum += x;
        cout << sum - (n - 1) << '\n';
    }

    return 0;
}