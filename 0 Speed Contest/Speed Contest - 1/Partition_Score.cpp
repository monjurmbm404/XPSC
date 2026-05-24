// problem link: https://www.codechef.com/problems/PARTSCORE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        sort(v.begin(), v.end());

        if (k == 1)
            cout << (v[0] + v[n - 2] + v[n - 1] * 2) << "\n";
        else
            cout << (v[0] + v[n - (k + 1)] + v[n - 2] + v[n - 1]) << "\n";
    }

    return 0;
}