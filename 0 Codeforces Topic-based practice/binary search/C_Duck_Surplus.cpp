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

        for (int i = 1; i < n; i++)
            if (v[i - 1] > v[i])
                v[i] += v[i - 1];

        cout << v[n - 1] << "\n";
    }

    return 0;
}