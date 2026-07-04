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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            int XOR = 0;
            for (int j = 0; j < n; j++)
                if (i != j)
                    XOR ^= v[j];
            if (XOR == v[i])
            {
                cout << v[i] << "\n";
                break;
            }
        }
    }

    return 0;
}