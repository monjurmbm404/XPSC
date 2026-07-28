#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<char> v(6);
    while (t--)
    {
        for (int i = 0; i < 6; i++)
            cin >> v[i];

        bool hattrick = false;

        for (int i = 0; i < 4; i++)
            if (v[i] == 'W' && v[i + 1] == 'W' && v[i + 2] == 'W')
            {
                hattrick = true;
                break;
            }
        cout << (hattrick ? "YES" : "NO") << "\n";
    }

    return 0;
}