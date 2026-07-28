// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    for (char &c : a)
        c = tolower(c);

    for (char &c : b)
        c = tolower(c);

    if (a < b)
        cout << -1 << '\n';
    else if (a > b)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}