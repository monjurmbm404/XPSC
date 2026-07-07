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
        int x, y;
        cin >> x;

        bool flag = true;
        for (int i = 0; i < 32 && flag; i++)
        {
            y = (1 << i) - 1;
            int z = x ^ y;
            if (x + y > z && x + z > y && y + z > x)
                flag = false;
        }
        cout << (flag ? -1 : y) << "\n";
    }

    return 0;
}