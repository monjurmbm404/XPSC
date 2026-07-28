#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int cnt = 0;
        for (int i = 0; i < 32; i++)
            if ((1 << i) & n)
                cnt++;

        cout << ((cnt % 2 == 0) ? "EVEN" : "ODD") << "\n";
    }

    return 0;
}