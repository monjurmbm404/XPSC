#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        (i % 2 == 1) ? cout << "I hate" : cout << "I love", (i == n) ? cout << " it" : cout << " that ";

    return 0;
}