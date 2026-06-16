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
        int n, m;
        string s;
        cin >> n >> m >> s;

        vector<int> v(7, 0);

        for (char c : s)
            v[c - 'A']++;

        int cnt = 0;

        for (int i = 0; i < 7; i++)
            if (v[i] < m)
                cnt += m - v[i];

        cout << cnt << "\n";
    }

    return 0;
}