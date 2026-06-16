#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        cin >> n;
        auto ans = upper_bound(v.begin(), v.end(), n)--;
        cout << ans - v.begin() << "\n";
    }

    return 0;
}