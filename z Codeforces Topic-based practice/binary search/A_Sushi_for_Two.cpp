#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n), groups;
    for (int &x : v)
        cin >> x;

    int cnt = 1;
    for (int i = 1; i < n; i++)
        if (v[i] == v[i - 1])
            cnt++;
        else
            groups.push_back(cnt), cnt = 1;
    groups.push_back(cnt);

    int ans = 0;
    for (int i = 1; i < (int)groups.size(); i++)
        ans = max(ans, 2 * min(groups[i], groups[i - 1]));

    cout << ans << '\n';

    return 0;
}