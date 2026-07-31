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
        long long n;
        cin >> n;
        vector<long long> v;

        v.push_back(n);
        for (int k = 0; k <= __lg(n); k++)
            if ((n >> k) & 1)
            {
                long long val = n - (1LL << k);
                if (val > 0)
                    v.push_back(val);
            }

        sort(v.begin(), v.end());
        cout << v.size() << "\n";
        for (long long x : v)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}