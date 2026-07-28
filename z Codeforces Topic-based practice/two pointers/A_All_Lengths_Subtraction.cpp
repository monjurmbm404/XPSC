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

        bool flag = true;

        int cur = 1;
        int l = 0, r = n - 1;

        while (cur <= n)

            if (v[l] == cur)
                cur++, l++;
            else if (v[r] == cur)
                cur++, r--;
            else
            {
                flag = false;
                break;
            }

        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}