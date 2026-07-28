#include <bits/stdc++.h>
using namespace std;
#define a first
#define b second
bool isNotPrime[2000001];
vector<long long> divs[2000001];
long long freq[2000001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (long long i = 2; i <= 200000; i++)
        if (!isNotPrime[i])
            for (long long j = i; j <= 200000; j += i)
                isNotPrime[i] = j, divs[j].push_back(i);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<pair<long long, long long>> arr(n);

        for (auto &it : arr)
            cin >> it.a;
        for (auto &it : arr)
            cin >> it.b;
        sort(arr.begin(), arr.end(), [](pair<long long, long long> &x, pair<long long, long long> &y)
             { return x.b < y.b; });

        long long ans = arr[0].b + arr[1].b;

        if (arr[0].a % 2 == 0)
            ans -= arr[0].b;
        if (arr[1].a % 2 == 0)
            ans -= arr[1].b;

        for (auto &[it, it2] : arr)
        {
            for (auto &primeF : divs[it])
            {
                freq[primeF]++;
                if (freq[primeF] >= 2)
                    ans = 0;
            }
        }
        for (auto &[it, it2] : arr)
        {
            for (auto &primeF : divs[it])
                freq[primeF]--;
            for (auto &primeF : divs[it + 1])
                if (freq[primeF] != 0)
                    ans = min(ans, it2);

            for (auto &primeF : divs[it])
                freq[primeF]++;
        }

        for (auto &primeF : divs[arr[0].a])
            freq[primeF]--;
        for (long long i = 1; i < n; i++)
            for (auto &primeF : divs[arr[i].a])
            {
                long long ans2 = primeF - (arr[0].a % primeF);
                ans = min(ans, ans2 * arr[0].b);
                freq[primeF]--;
            }
        cout << ans << "\n";
    }

    return 0;
}