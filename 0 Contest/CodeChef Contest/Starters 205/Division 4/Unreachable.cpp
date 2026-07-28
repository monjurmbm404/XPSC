#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x;
    bool oddOne, evenOne;
    cin >> t;

    while (t--)
    {
        cin >> n;

        oddOne = false, evenOne = false;

        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (x == 1)
                if (i & 1)
                    oddOne = true;
                else
                    evenOne = true;
        }

        cout << ((oddOne && evenOne) ? "No" : "Yes") << "\n";
    }

    return 0;
}