#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, r;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    int t;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        auto l_idx = lower_bound(v.begin(), v.end(), l);
        auto r_idx = upper_bound(v.begin(), v.end(), r);

        cout << r_idx - l_idx << " ";
    }

    return 0;
}