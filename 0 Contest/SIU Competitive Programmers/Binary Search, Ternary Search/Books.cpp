#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    long long l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum += v[r];

        while (sum > k)
        {
            sum -= v[l];
            l++;
        }
        ans = max(r - l + 1, ans);
        r++;
    }

    cout << ans;

    return 0;
}