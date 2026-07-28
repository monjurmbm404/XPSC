#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    int mx = x, mn = x, cnt = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x > mx)
            cnt++, mx = x;
        else if (x < mn)
            cnt++, mn = x;
    }

    cout << cnt << "\n";

    return 0;
}