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
        vector<int> bit(31);
        for (int i = 0; i < n; i++)
        {
            int val = v[i];
            int p = 0;
            while (val)
            {
                bit[p] += val % 2;
                p++;
                val /= 2;
            }
        }

        int ans = 0;
        for (int i = 0; i < 30; i++)
        {
            if (bit[i] % 2 != 0)
                ans += (1 << i);
        }
        for (int i = 0; i < n; i++)
        {
            int val = v[i];
            int p = 0;
            while (val)
            {
                bit[p] -= val % 2;
                p++;
                val /= 2;
            }
            int carry = 0;
            for (int j = 0; j < 30; j++)
            {
                if (bit[j] % 2 != 0)
                    carry += (1 << j);
            }
            ans = min(ans, carry);
            val = v[i];
            p = 0;
            while (val)
            {
                bit[p] += val % 2;
                p++;
                val /= 2;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}