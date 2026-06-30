#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int East = 0, West = 0;
    for (char c : s)
        if (c == 'E')
            East++;
        else
            West++;

    cout << ((East > West) ? "East" : "West");
    return 0;
}