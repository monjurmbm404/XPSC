#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, s2;
    while (getline(cin, s2))
        s += s2;

    for (char &c : s)
        c = tolower(c);

    vector<int> v(26, 0);
    for (char c : s)
        if (c >= 'a' && c <= 'z')
            v[c - 'a']++;
    for (int i = 0; i < 26; i++)
        cout << char(i + 'a') << " : " << v[i] << "\n";

    return 0;
}