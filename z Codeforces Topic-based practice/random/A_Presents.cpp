#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p;
    cin >> n;
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) cin >> p, ans[p] = i;
    for (int i = 1; i <= n; i++) cout << ans[i] << " ";

    return 0;
}