#include <bits/stdc++.h>
using namespace std;

map<int, int> primeFactorization(int n)
{
    map<int, int> cnt;
    for (int i = 2; i * i <= n; i++)
        while (n % i == 0)
            cnt[i]++, n /= i;
    if (n > 1)
        cnt[n]++;
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    map<int, int> fa = primeFactorization(a);
    map<int, int> fb = primeFactorization(b);

    long long gcd = 1, lcm = 1;

    // Store all primes
    set<int> primes;
    for (auto [p, e] : fa)
        primes.insert(p);
    for (auto [p, e] : fb)
        primes.insert(p);

    for (int p : primes)
    {
        int e1 = fa[p];
        int e2 = fb[p];

        // GCD -> minimum exponent
        for (int i = 0; i < min(e1, e2); i++)
            gcd *= p;

        // LCM -> maximum exponent
        for (int i = 0; i < max(e1, e2); i++)
            lcm *= p;
    }

    cout << "Prime Factors of " << a << ":\n";
    for (auto [p, e] : fa)
        cout << p << " -> " << e << '\n';

    cout << "\nPrime Factors of " << b << ":\n";
    for (auto [p, e] : fb)
        cout << p << " -> " << e << '\n';

    cout << "\nGCD = " << gcd << '\n';
    cout << "LCM = " << lcm << '\n';

    return 0;
}