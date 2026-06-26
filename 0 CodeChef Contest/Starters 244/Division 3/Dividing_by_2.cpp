#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        sort(v.begin(), v.end());
        while (v[0] != v[n - 1])
        {
            v[n - 1] = v[n - 1] / 2;
            sort(v.begin(), v.end());
            cnt++;
        }
        cout << cnt << "\n";
    }
}
