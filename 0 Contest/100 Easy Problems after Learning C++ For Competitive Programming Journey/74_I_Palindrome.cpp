// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include <bits/stdc++.h>
using namespace std;

void process(int n)
{
    int real = n, rev = 0, t = n;

    while (t > 0)
    {
        int digit = t % 10;
        rev = rev * 10 + digit;
        t /= 10;
    }

    cout << rev << '\n';

    if (real == rev)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int x;
    cin >> x;

    process(x);

    return 0;
}