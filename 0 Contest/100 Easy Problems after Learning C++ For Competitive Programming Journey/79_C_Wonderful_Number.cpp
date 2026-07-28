// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
    return n % 2 == 1;
}

bool isBinaryPalindrome(int n)
{
    if (n == 0) return true;

    vector<int> bits;

    while (n > 0)
    {
        bits.push_back(n % 2);
        n /= 2;
    }

    int i = 0, j = bits.size() - 1;

    while (i < j)
    {
        if (bits[i] != bits[j])
            return false;
        i++;
        j--;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    if (isOdd(N) && isBinaryPalindrome(N))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}