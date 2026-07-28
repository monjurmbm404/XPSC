#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, y, move;
    string s;
    cin >> t;
    while (t--)
    {
        bool flag = 0;
        cin >> move >> x >> y >> s;
        for (int i = 0; i < 10000; i++)
            for (char c : s)
            {
                if (c == 'N')
                {
                    y--;
                    if (x == 0 && y == 0)
                    {
                        flag = true;
                        break;
                    }
                }
                else if (c == 'E')
                {

                    x--;
                    if (x == 0 && y == 0)
                    {
                        flag = true;
                        break;
                    }
                }
                else if (c == 'S')
                {
                    y++;
                    if (x == 0 && y == 0)
                    {
                        flag = true;
                        break;
                    }
                }
                else if (c == 'W')
                {
                    x++;
                    if (x == 0 && y == 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }

        cout << ((flag) ? "YES" : "NO") << "\n";
    }

    return 0;
}