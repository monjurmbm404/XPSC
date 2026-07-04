#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, x, ans = 0;
    cin >> n >> k;
    vector<int> v(n);

    for (int &x : v)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= v[k - 1] && v[i] > 0)
            ans++;
    }

    cout << ans;

    return 0;
}
