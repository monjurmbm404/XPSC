// problem link: https://www.codechef.com/problems/EPISODES

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k;
    cin >> t;
    while (t--)
        cin >> n >> k, cout << ((n * k) / 60) << " " << ((n * k) % 60) << "\n";
    return 0;
}