#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int count = 0;
    for(char &c : s) c = tolower(c);

    string text;

    while (cin >> text)
    {
        if (text == "END_OF_TEXT") break;
        for(char &c : text) c = tolower(c);
        if (text == s)
            count++;
    }

    cout << count << '\n';

    return 0;
}