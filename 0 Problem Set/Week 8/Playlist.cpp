#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l = 0, ans = 0;
    cin >> n;

    vector<int> v(n);
    multiset<int> ms;

    for (int &x : v)
        cin >> x;

    for (int r = 0; r < n; r++)
    {
        while (ms.count(v[r]))
            ms.erase(ms.find(v[l])), l++;

        ms.insert(v[r]);

        ans = max(ans, r - l + 1);
    }

    cout << ans << '\n';
}