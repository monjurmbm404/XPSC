#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, target = 0, ans = 0;
        cin >> n;

        vector<int> v(n);

        for (int &a : v)
            cin >> a, target |= a;

        for (int i = 0; i < n; i++)
            if (v[i] != target)
            {
                if (i + 1 < n)
                    v[i + 1] = v[i] | v[i + 1];
                ans++;
            }

        cout << ans << "\n";
    }
}
