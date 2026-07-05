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
        string s1, s2;
        cin >> s1 >> s2;

        int ans = 0, i = 0;
        for (i = 0; i < min(s1.size(), s2.size()); i++)
            if (s1[i] != s2[i])
                break;

        ans = i;
        if (ans >= 1)
            ans++;
        ans += s1.size() - i;
        ans += s2.size() - i;
        cout << ans << "\n";
    }

    return 0;
}