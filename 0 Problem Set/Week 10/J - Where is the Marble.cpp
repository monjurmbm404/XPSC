#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, x;
    int t = 1;

    while (true)
    {
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;

        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        sort(v.begin(), v.end());

        cout << "CASE# " << t++ << ":\n";

        while (q--)
        {
            cin >> x;

            auto it = lower_bound(v.begin(), v.end(), x);

            if (it != v.end() && *it == x)
                cout << x << " found at " << (it - v.begin() + 1) << "\n";
            else
                cout << x << " not found\n";
        }
    }

    return 0;
}