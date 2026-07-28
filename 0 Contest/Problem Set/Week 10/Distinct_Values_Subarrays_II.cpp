#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int &x : v)
        cin >> x;

    long long l = 0, r = 0, cnt = 0;
    map<int, int> mp;

    while (r < n)
    {
        mp[v[r]]++;
        while (mp.size() > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
                mp.erase(v[l]);
            l++;
        }

        cnt += (r - l + 1);
        r++;
    }

    cout << cnt << "\n";

    return 0;
}