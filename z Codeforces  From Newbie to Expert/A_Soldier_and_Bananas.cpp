#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    cin >> k >> n >> w;

    int total = k * w * (w + 1) / 2;

    cout << max(0, total - n);

    return 0;
}