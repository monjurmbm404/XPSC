#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 1;
        while (ans + k <= n)
        {
            ans += k;
        }
        cout << ans << "\n";
    }
}
