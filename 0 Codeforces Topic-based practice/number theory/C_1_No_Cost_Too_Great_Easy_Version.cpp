#include <bits/stdc++.h>
using namespace std;

bool isNotPrime[2000001];
vector<int> divs[2000001];
long long freq[2000001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i <= 200000; i++)
        if (!isNotPrime[i])
            for (int j = i; j <= 200000; j += i)
                isNotPrime[i] = j, divs[j].push_back(i);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        int ans = 2;

        for (auto &it : a)
        {
            for (auto &primeF : divs[it])
            {
                freq[primeF]++;
                if (freq[primeF] >= 2)
                    ans = 0;
            }
        }
        if (ans > 1)
            for (auto &it : a)
            {
                for (auto &primeF : divs[it])
                    freq[primeF]--;
                for (auto &primeF : divs[it + 1])
                    if (freq[primeF] != 0)
                        ans = 1;

                for (auto &primeF : divs[it])
                    freq[primeF]++;
            }
        cout << ans << "\n";
        for (auto &it : a)
            for (auto &primeF : divs[it])
                freq[primeF]--;
    }

    return 0;
}