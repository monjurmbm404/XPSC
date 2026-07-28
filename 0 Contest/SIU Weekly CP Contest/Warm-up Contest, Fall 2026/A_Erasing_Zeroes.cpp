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
        string s;
        cin >> s;

        int n = s.size();
        int l = 0, r = n - 1;

        while (l < n)
        {
            if (s[l] == '1')
                break;
            l++;
        }
        while (l < r)
        {
            if (s[r] == '1')
                break;
            r--;
        }

        int ans = 0;
        for (int i = l; i <= r; i++)
        {
            if (s[i] == '0')
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}