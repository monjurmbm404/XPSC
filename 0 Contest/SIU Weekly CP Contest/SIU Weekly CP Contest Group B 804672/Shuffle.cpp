#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s)
    { 

        if (s == "-") break;

        int m;
        cin >> m;

        while (m--)
        {
            int h;
            cin >> h;

            string left = s.substr(0, h);
            string right = s.substr(h);

            s = right + left;
        }

        cout << s << '\n';
    }

    return 0;
}