#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        sort(v.begin(), v.end());
        if (v[0] * 2 < v[1])
            cout << v[1] - v[0] << "\n";
        else
            cout << v[0] << "\n";
    }

    return 0;
}