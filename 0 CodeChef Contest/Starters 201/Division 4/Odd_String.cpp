// problem link: https://www.codechef.com/problems/LMP2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;

        map<char, int> mp;
        for (char c : s)
            mp[c]++;

        bool flag = true;

        for (auto [c, cnt] : mp)
            if (cnt > 2)
            {
                flag = false;
                break;
            }

        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}