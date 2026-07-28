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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        if (2 * a[0] - a[1] < 0 || (2 * a[0] - a[1]) % (n + 1) != 0)
        {
            cout << "NO\n";
            continue;
        }

        int x2 = (2 * a[0] - a[1]) / (n + 1);
        int x1 = a[0] - n * x2;

        if (x1 < 0)
        {
            cout << "NO\n";
            continue;
        }

        bool pos = true;

        for (int i = 1; i <= n; i++)
            if (a[i - 1] - i * x1 - (n - i + 1) * x2 != 0)
                pos = false;

        if (pos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}