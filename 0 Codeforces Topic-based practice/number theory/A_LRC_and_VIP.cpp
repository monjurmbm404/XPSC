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
        int n, mx = INT_MIN, mn = INT_MAX;
        cin >> n;

        vector<int> v(n);

        for (int &x : v)
            cin >> x, mx = max(mx, x), mn = min(mn, x);

        if (mn == mx)
            cout << "No\n";
        else
        {
            cout << "Yes\n";
            for (int x : v)
                cout << ((x == mx) ? "1 " : "2 ");
            cout << "\n";
        }
    }

    return 0;
}