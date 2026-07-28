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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int k = sqrt(n);

        if (k * k != n)
        {
            cout << "No\n";
            continue;
        }

        int c = 0;
        for (char x : s)
            if (x == '0')
                c++;

        cout << (sqrt(n) - 2 == sqrt(c) ? "Yes" : "No") << '\n';
    }

    return 0;
}