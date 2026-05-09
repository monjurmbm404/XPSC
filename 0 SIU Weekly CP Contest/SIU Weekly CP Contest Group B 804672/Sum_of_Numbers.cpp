#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s)
    {
        if (s == "0") break;
        int sum = 0;
        for (char c : s) sum += c - '0';
        cout << sum << "\n";
    }

    return 0;
}