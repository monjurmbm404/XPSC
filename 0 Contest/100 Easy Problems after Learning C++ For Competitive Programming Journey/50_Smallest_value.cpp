// https://marisaoj.com/problem/536

#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int mn = 10000;

    for (int i = 0; i < n; i++)
        cin >> x, mn = min(mn, x);

    cout << mn;

    return 0;
}