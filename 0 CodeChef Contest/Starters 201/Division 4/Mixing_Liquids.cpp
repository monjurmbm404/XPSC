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
        int a, b;
        cin >> a >> b;

        int unit_of_water = b / 2;

        if (a < unit_of_water)
            cout << (a * 3);
        else
            cout << (unit_of_water * 3);
        cout << "\n";
    }

    return 0;
}