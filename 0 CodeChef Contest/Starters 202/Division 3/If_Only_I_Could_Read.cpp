#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        int l = -1, r = -1;

        for (int i = 0; i < n - 1; i++)
            if (v[i] > v[i + 1])
            {
                l = ++i, r = ++i;
                break;
            }

        if (l == -1 && r == -1)
            cout << -1 << "\n";
        else
            cout << l << " " << r << "\n";
    }

    return 0;
}