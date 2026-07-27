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
        vector<long long> v(n);
        for (long long &x : v)
            cin >> x;

        int flag = true;

        for (int i = 0; i < n; i++)
        {
            if (i + 1 > v[i])
            {
                flag = false;
                break;
            }
            if (i + 1 < n)
                v[i + 1] += (v[i] - (i + 1));
        }

        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}