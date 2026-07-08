#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, p, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p, sum += p;

    cout << fixed << setprecision(12) << sum / n << '\n';

    return 0;
}