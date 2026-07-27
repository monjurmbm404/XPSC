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
        cin >> n;
        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {

            for (int j = 2; j * j <= v[i]; j++)
            {
                if (v[i] % j == 0)
                    while (v[i] % j == 0)
                        cnt[j]++, v[i] /= j;
            }
            if (v[i] > 1)
                cnt[v[i]]++;
        }
        bool flag = true;
        for (auto [x, y] : cnt)
            if (y % n != 0)
            {
                flag = false;
                break;
            }
        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}