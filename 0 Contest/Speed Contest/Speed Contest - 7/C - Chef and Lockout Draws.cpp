#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << ((a + b == c || a + c == b || b + c == a) ? "YES" : "NO") << "\n";
    }

    return 0;
}