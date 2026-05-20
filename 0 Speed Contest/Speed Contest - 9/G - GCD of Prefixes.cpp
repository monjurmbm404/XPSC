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

        int gc = v[0];

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            int cur_gc = __gcd(gc, v[i]);
            if (cur_gc != v[i])
            {
                flag = false;
                break;
            }
            else
                gc = cur_gc;
        }

        if (!flag)
            cout << -1;
        else
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
        cout << "\n";
    }

    return 0;
}