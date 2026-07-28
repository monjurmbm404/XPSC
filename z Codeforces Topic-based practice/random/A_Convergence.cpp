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
        for (int &x : v) cin >> x;
        sort(v.begin(), v.end());
        int l = 0, r = n - 1, call = 0;
        while (l < r)
            if (v[l] != v[r])
                call++, l++, r--;
            else
                break;
        cout << call << "\n";
    }

    return 0;
}