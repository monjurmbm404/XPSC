#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >>m;

    cout << "YES\n"; 
    for (long long i = n; i < m; i += 2)
    {
        cout << i << " " << i + 1 << "\n";
    }

    return 0;
}