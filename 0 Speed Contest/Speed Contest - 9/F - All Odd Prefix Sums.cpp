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
        int n, x;
        cin >> n;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 1)
                odd++;
        }
        if (odd == 1 )
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}