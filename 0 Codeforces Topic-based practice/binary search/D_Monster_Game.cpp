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
        vector<long long> a(n), b(n), pref(n);

        for (long long &x : a)
            cin >> x;
        for (long long &x : b)
            cin >> x;

        sort(a.begin(), a.end());

        pref[0] = b[0];

        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + b[i];

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {

            int x = a[i];
            int rem = n - (lower_bound(a.begin(), a.end(), x) - a.begin());
            int levels = upper_bound(pref.begin(), pref.end(), rem) - pref.begin();
            ans = max(ans, x * 1LL * levels);
        }

        cout << ans << "\n";
    }

    return 0;
}