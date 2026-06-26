#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int collect_Left = 0;
        int collect_Right = 0;

        for (int i = 0; i < l - 1; i++)
            collect_Left += v[i];
        for (int i = r; i < n; i++)
            collect_Right += v[i];

        cout << max(collect_Left, collect_Right) << "\n";
    }
}
