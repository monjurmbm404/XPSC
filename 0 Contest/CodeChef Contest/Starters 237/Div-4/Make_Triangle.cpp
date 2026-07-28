#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int mx = max({x, y, z});

        int sum = x + y + z - mx;

        if (sum > mx)
            cout << 0 << endl;
        else
            cout << (mx - sum + 1) << endl;
    }
}
