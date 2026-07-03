#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n;
    bool flag = false;
    while (n--)
    {
        cin >> x;
        if (x == 1)
            flag = true;
    }

    cout << (flag ? "HARD" : "EASY");

    return 0;
}