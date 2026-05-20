#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, h;
    cin >> x >> h;
    cout << ((x <= 4) ? h : (((x - 4) * 24) + h)) << "\n";
    return 0;
}