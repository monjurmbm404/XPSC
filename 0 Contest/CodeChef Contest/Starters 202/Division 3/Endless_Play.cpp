#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, h;
    cin >> x >> h;
    cout << ((x < 5) ? h : (((x - 4) * 24) + h));

    return 0;
}