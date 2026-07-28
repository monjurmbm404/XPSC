#include <bits/stdc++.h>
using namespace std;

long long sum(long long n)
{
    long long sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;

        int cnt = 0;

        for (long long y = x + 1; y <= x + 200; ++y)
        {
            if (y - sum(y) == x)
                cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}