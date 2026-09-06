#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> player(m + 2);

    for (int i = 1; i <= m + 1; i++)
        cin >> player[i];

    vector<int> differ(m + 1);
    for (int i = 1; i <= m; i++)
        differ[i] = (player[i] ^ player[m + 1]);

    int cnt = 0;

    for (int i = 1; i <= m; i++)
    {
        int d = __builtin_popcount(differ[i]);

        if (d <= k)
            cnt++;
    }

    cout << cnt;

    return 0;
}