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
        string s;
        cin >> n >> s;
        int cnt = 0, ans = 0;
        for (char c : s)
        {
            if (c == '#')
                cnt++;
            else
            {
                ans = max(cnt, ans);
                cnt = 0;
            }
        }
        ans = max(cnt, ans);
        cout << ++ans / 2 << "\n";
    }

    return 0;
}