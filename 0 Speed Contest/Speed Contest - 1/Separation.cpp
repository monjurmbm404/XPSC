// problem link : https://www.codechef.com/problems/SEPX

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x, flag;
    cin >> t;
    while (t--)
    {
        flag = 0, cin >> n >> x;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        sort(v.begin(), v.end());

        for (int i = 1; i < n; i++)
            if (v[i] > x && v[i - 1] < x)
            {
                flag = 1;
                break;
            }
        cout << (flag ? "No" : "Yes") << "\n";
    }

    return 0;
}