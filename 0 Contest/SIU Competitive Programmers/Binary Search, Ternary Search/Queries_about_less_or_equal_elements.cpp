#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin >> x;

        auto it = upper_bound(v.begin(), v.end(), x);
        cout << it - v.begin() << " ";
    }

    return 0;
}