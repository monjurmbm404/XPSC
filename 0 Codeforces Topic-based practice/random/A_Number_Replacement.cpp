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

        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        string s;
        cin >> s;

        vector<char> mp(51, 0);
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]] == 0)
                mp[v[i]] = s[i];
            else if (mp[v[i]] != s[i])
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}