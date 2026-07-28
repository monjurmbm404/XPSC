#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t, m;
        cin >> s >> t;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == t[i])
            {
                m.push_back('G');
            }
            else
                m.push_back('B');
        }
        cout << m << "\n";
    }

    return 0;
}