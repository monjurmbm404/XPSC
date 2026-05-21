#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, s, flag;
    cin >> t;
    while (t--)
    {
        flag = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s <= 4)
                flag = 0;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}