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
        int n, a = 0, b = 0;
        cin >> n;
        for (int i = 31; i >= 0; i--)
            if (n & (1 << i))
            {
                b |= (1 << i);
                break;
            }
        a = n ^ b;
        cout << a << " " << b << "\n";
    }

    return 0;
}