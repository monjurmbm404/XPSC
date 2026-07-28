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
        map<long long, long long> mp;
        for (int &x : a)
            cin >> x, mp[x]++;

        map<long long, long long> frog;
        for (int i = 1; i <= n; i++)
            for (int mul = i; mul <= n; mul += i)
                frog[mul] += mp[i];

        long long ans = 0;
        for (auto [cor, frog_cnt] : frog)
            ans = max(ans, frog_cnt);
            
        cout << ans << "\n";
    }

    return 0;
}