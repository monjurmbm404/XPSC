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
        string s;
        cin >> s;

        int year = stoi(s);

        bool found = false;

        for (int i = 0; i <= 100 && !found; i++)
        {
            for (int j = 0; j <= 100 && !found; j++)
            {
                if ((i + j) * (i + j) == year)
                {
                    cout << i << " " << j << "\n";
                    found = true;
                }
            }
        }

        if (!found)
            cout << -1 << "\n";
    }

    return 0;
}