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
        long long n;
        cin >> n;

        vector<long long> v(n);

        for (long long &x : v)
            cin >> x;

        long long pre = 0;
        vector<long long> ans(n);

        for (int i = 0; i < n; i++)
        {
            pre += v[i];
            if (i == 0)
                ans[i] = v[i];
            else
                ans[i] = min(ans[i - 1], pre / (i + 1));
        }

        for (long long x : ans)
            cout << x << " ";

        cout << "\n";
    }

    return 0;
}