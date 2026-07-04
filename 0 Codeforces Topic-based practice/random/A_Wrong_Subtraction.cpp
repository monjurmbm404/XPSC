#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    while (k--)
    {
        int last = n % 10;

        if (last == 0)
            n /= 10;
        else
            n--;
    }

    cout << n;

    return 0;
}