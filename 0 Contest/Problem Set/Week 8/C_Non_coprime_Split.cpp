#include <bits/stdc++.h>
using namespace std;

long long small_prime(long long x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return i;
    return x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        if (r <= 3)
            cout << -1 << "\n";
        else
        {
            if (l < r)
            {
                if (r & 1)
                    r--;
                cout << 2 << " " << r - 2 << "\n";
            }
            else
            {
                long long prime = small_prime(l);
                if (prime == l)
                    cout << -1 << "\n";
                else
                    cout << prime << " " << l - prime << "\n";
            }
        }
    }

    return 0;
}