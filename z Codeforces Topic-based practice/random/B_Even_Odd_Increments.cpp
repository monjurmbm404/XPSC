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
        int n, q;
        cin >> n >> q;

        long long sum = 0;
        long long odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sum += x;

            if (x % 2)
                odd++;
            else
                even++;
        }

        while (q--)
        {
            int type;
            long long x;
            cin >> type >> x;

            if (type == 0)
            {
                sum += even * x;

                if (x % 2)
                {
                    odd += even;
                    even = 0;
                }
            }
            else
            {
                sum += odd * x;

                if (x % 2)
                {
                    even += odd;
                    odd = 0;
                }
            }

            cout << sum << "\n";
        }
    }
}