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
        int n, one = 0, i = 31, cnt = 0;
        cin >> n;
        while (i >= 0)
        {
            if (n & (1 << i))
                if (++one == 2)
                    break;
            i--;
        }
        while (i >= 0)
        {
            if ((n & (1 << i)) == 0)
                cnt++;
            i--;
        }
        cout << (1 << cnt) << "\n";
    }

    return 0;
}