#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] == 0)
        {
            mp[v[i]]++;
            string s = v[i];

            cout << s[s.size() - 2]
                 << s[s.size() - 1];
        }
    }

    return 0;
}