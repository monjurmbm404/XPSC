#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        char c;
        for (int i = 0; i < 9; i++)
            cin >> c, mp[c]++;
        if (mp['A'] == 2)
            c = 'A';
        else if (mp['B'] == 2)
            c = 'B';
        else
            c = 'C';
        cout << c << "\n";
    }

    return 0;
}