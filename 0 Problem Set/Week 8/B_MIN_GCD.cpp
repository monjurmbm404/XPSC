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

        sort(v.begin(), v.end());

        long long min_val = v[0];

        vector<long long> mul;

        for (int i = 1; i < n; i++)
            if (v[i] % min_val == 0)
                mul.push_back(v[i]);

        long long gc = 0;
        bool flag = false;

        for (int i = 0; i < mul.size(); i++)
        {
            gc = __gcd(gc, mul[i]);

            if (gc == min_val)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "Yes" : "No") << "\n";
    }

    return 0;
}