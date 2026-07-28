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
        long long a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }

        long long ha = 0, hb = 0;

        for (int i = 32; i >= 0; i--)
        {
            if ((1 << i) & a)
            {
                ha = i;
                break;
            }
        }
        for (int i = 32; i >= 0; i--)
        {
            if ((1 << i) & b)
            {
                hb = i;
                break;
            }
        }

        if (hb > ha)
        {

            cout << -1 << "\n";
            continue;
        }

        vector<int> v;

        for (int i = 0; i <= max(ha, hb); i++)
        {
            if ((1LL << i) & b)
            {
                if ((1LL << i) & a)
                {
                }
                else
                {
                    int ok = 1LL << i;
                    v.push_back(ok);
                }
            }
            else if ((1LL << i) & a)
            {
                if ((1LL << i) & b)
                {
                }
                else
                {
                    int ok = 1LL << i;
                    v.push_back(ok);
                }
            }
        }

        cout << v.size() << "\n";
        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}