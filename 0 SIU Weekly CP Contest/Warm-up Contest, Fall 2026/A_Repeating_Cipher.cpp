#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 1;
    string s;
    cin >> n >> s;
    s = '#' + s;
    for (int i = 1; ans <= n; i++)
    {
        cout << s[ans];
        ans += i;
    }

    return 0;
}