#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i <= 3 * 10e5; i++)
        v.push_back(i ^ v[i - 1]);
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int XOR = v[a - 1] ^ b;

        if (XOR == 0)
            cout << a << "\n";
        else if (a == XOR)
            cout << a + 2 << "\n";
        else
            cout << a + 1 << "\n";
    }

    return 0;
}