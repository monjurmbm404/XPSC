#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n;
    vector<int> v(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[i] = x + v[i - 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        cin >> n;
        cout << (lower_bound(v.begin(), v.end(), n) - v.begin()) << "\n";
    }

    return 0;
}