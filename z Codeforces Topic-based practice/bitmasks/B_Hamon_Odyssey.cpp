#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, group, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        ans = v[0];
        for (int i = 0; i < n; i++)
            ans &= v[i];

        if (ans)
            cout << 1 << "\n";
        else
        {
            group = 0, ans = v[0];

            for (int i = 0; i < n; i++)
            {
                ans &= v[i];
                if (ans == 0)
                    group++, ans = v[i + 1];
            }
            cout << group << "\n";
        }
    }
    return 0;
}