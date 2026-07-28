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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if ((abs((i + 1) - v[i])) % __gcd(x, y) != 0)
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}