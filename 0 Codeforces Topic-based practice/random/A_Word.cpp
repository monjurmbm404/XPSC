#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int l = 0, u = 0;

    for (char c : s)
        (c >= 'A' && c <= 'Z') ? u++ : l++;

    if (u > l)
        for (char &c : s)
            c = toupper(c);
    else
        for (char &c : s)
            c = tolower(c);

    cout << s << '\n';

    return 0;
}