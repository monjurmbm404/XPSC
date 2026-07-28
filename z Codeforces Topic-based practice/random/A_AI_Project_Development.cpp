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
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
        long long withoutAI = (n + (x + y) - 1) / (x + y),withAI;
        if ((n + x - 1) / x <= z) withAI = (n + x - 1) / x;
        else withAI = z + ((n - x * z) + (x + 10 * y) - 1) / (x + 10 * y); 
        cout << min(withoutAI, withAI) << '\n';
    }

    return 0;
}