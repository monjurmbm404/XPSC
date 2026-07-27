#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ans;
    cin >> s;

    for (char &c : s)
        if (c != 'a' && c != 'A' && c != 'e' && c != 'E' && c != 'i' && c != 'I' && c != 'o' && c != 'O' && c != 'u' &&
            c != 'U' && c != 'y' && c != 'Y')
        {
            c = tolower(c);
            ans.push_back('.');
            ans.push_back(c);
        }

    cout << ans;

    return 0;
}