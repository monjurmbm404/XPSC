#include <bits/stdc++.h>
using namespace std;
vector<int> allPrimes;
void sieve(int maxN)
{
    vector<bool> prime(maxN + 1, true);

    // Time:O(n log log n)​
    for (int i = 2; i <= maxN; i++)
        if (prime[i])
        {
            allPrimes.push_back(i);
            for (int j = i + i; j <= maxN; j += i)
                prime[j] = false;
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(1e7);

    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;

        for (int i = 1; i <= n; i++)
            cnt += (upper_bound(allPrimes.begin(), allPrimes.end(), (n / i)) - allPrimes.begin());

        cout << cnt << "\n";
    }

    return 0;
}