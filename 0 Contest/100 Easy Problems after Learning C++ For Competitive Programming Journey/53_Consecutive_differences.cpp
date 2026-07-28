// https://marisaoj.com/problem/540

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = abs(a[1] - a[0]);

    for (int i = 1; i < n; i++)
    {
        mx = max(mx, abs(a[i] - a[i - 1]));
    }

    cout << mx << '\n';

    return 0;
}