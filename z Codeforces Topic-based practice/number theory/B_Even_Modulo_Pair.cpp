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

        int ans1 = 0, ans2 = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((v[j] % v[i]) % 2 == 0)
                {
                    ans1 = v[i];
                    ans2 = v[j];
                    break;
                }
            }
        }

        if (ans1 and ans2)
            cout << ans1 << " " << ans2 << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}