#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t ;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << (((50 - x) >= 2 * y && (50 - x) <= 2 * y + 10) ? "Yes" : "No") << "\n";
    }
    

    return 0;
}