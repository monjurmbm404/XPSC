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
        string s, t;
        cin >> n >> s;

        t = s;
        bool flag = true;
        for (int i = 1; i < n - 1; i++)
            if (s[i] == '1' && s[i - 1] == '1' && s[i + 1] == '1')
            {
                t[i] = '0';
                t[i - 1] = '0';
                t[i + 1] = '0';
            }

        for (auto it : t)
            if (it == '1')
            {
                flag = false;
                break;
            }

        cout << (flag ? "Yes" : "No") << "\n";
    }

    return 0;
}