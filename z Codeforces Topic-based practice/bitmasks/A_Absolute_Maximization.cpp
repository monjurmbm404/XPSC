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

        long long ans = 0;

        for (int bit = 0; bit <= 12; bit++)
{
    bool one = false, zero = false;

    for (int i = 0; i < n; i++)
    {
        if (v[i] & (1LL << bit))
            one = true;
        else
            zero = true;
    }

    if (one && zero)
        ans |= (1LL << bit);
}

        cout << ans << "\n";
    }

    return 0;
}