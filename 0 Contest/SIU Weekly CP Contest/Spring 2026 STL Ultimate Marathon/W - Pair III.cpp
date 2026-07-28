#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
    string s1, s2;
    cin >> n;
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
        cin >> s1 >> s2, v[i] = {s1, s2};
    map<string, int> mp;
    for (int i = 0; i < n; i++)
        mp[v[i].first + '-' + v[i].second]++;
    cout << mp.size();

    return 0;
}