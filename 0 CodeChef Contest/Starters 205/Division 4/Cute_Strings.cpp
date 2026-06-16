#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s[0] == s[2] && s[1] == 'w')
        cout << "Cute";
    else
        cout << "No";

    return 0;
}