#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, m, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> s;

        if (n % 2 == 1)
            cout << "No\n";
        else
        {
            int rest_match = n - m;

            int alice_win = 0, bob_win = 0;

            for (char c : s)
                if (c == '0')
                    bob_win++;
                else
                    alice_win++;
            int different = abs(alice_win - bob_win);

            cout << (rest_match >= different ? "Yes" : "No") << "\n";
        }
    }

    return 0;
}