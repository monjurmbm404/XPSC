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
        int one_count = 0;
        for (int &x : v)
            cin >> x, one_count += x;
        cout << ((one_count % 2 == n % 2) ? "YES" : "NO") << "\n";
    }

    return 0;
}