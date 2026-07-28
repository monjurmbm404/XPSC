// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool isPalindrome(int n)
{
    int original = n, reversed = 0;

    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int countDivisors(int n)
{
    int cnt = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;

            if (i != n / i)
                cnt++;
        }
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> a(N);

    int mx = INT_MIN, mn = INT_MAX;
    int primeCount = 0, palindromeCount = 0;

    int maxDivisors = 0;
    int numberWithMaxDivisors = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];

        mx = max(mx, a[i]);
        mn = min(mn, a[i]);

        if (isPrime(a[i]))
            primeCount++;

        if (isPalindrome(a[i]))
            palindromeCount++;

        int divisors = countDivisors(a[i]);

        if (divisors > maxDivisors ||
            (divisors == maxDivisors && a[i] > numberWithMaxDivisors))
        {
            maxDivisors = divisors;
            numberWithMaxDivisors = a[i];
        }
    }

    cout << "The maximum number : " << mx << '\n';
    cout << "The minimum number : " << mn << '\n';
    cout << "The number of prime numbers : " << primeCount << '\n';
    cout << "The number of palindrome numbers : " << palindromeCount << '\n';
    cout << "The number that has the maximum number of divisors : "
         << numberWithMaxDivisors << '\n';

    return 0;
}