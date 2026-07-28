// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0, danik = 0;

    for (char c : s)
    {
        if (c == 'A') anton++;
        else danik++;
    }

    if (anton > danik)
        cout << "Anton\n";
    else if (danik > anton)
        cout << "Danik\n";
    else
        cout << "Friendship\n";

    return 0;
}