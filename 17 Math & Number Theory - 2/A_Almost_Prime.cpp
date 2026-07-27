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
    sieve(3009);

    int n;
    cin >> n;

    vector<int> fre(n + 1);
    for (auto p : allPrimes)
        for (int i = p; i <= n; i += p)
            fre[i]++;

    int cnt = 0;

    for (int i = 1; i <= n; i++)
        if (fre[i] == 2)
            cnt++;

    cout << cnt;
    return 0;
}