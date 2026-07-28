#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> pairs[1001];
    for (int i = 1; i <= 1000; i++)
        for (int j = 1; j <= 1000; j++)
            if (__gcd(i, j) == 1)
                pairs[i].push_back(j);

    long long t, i, j, val, ans;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(1001, -1);
        for (int i = 1; i <= n; i++)
            cin >> val, a[val] = i;

        ans = -1;

        for (int val_1 = 1; val_1 <= 1000; val_1++)
            if (a[val_1] != -1)
                for (auto val_2 : pairs[val_1])
                    if (a[val_2] != -1)
                        i = a[val_1], j = a[val_2], ans = max(ans, i + j);

        cout << ans << "\n";
    }

    return 0;
}