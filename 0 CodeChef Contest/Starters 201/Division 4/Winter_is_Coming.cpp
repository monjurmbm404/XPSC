// problem link: https://www.codechef.com/problems/LMP2E

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, a, b, cnt;
    bool wear;
    cin >> t;
    while (t--)
    {
        cnt = 0, cin >> n >> a >> b;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        wear = false;

        for (int x : v)
            if (x > b)
                wear = false;
            else if (!wear && x < a)
            {
                wear = true;
                cnt++;
            }

        cout << cnt << "\n";
    }

    return 0;
}