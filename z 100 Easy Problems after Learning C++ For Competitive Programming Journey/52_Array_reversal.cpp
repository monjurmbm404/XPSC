// https://marisaoj.com/problem/537

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = n; i >= 1; i--)
    {
        if (i % 2 == 1)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}