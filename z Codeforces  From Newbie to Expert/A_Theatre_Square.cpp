#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, m, a;
    cin >> n >> m >> a;

    long long x = (n + a - 1) / a;
    long long y = (m + a - 1) / a;

    cout << x * y;

    return 0;
}