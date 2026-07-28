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
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int day = n / (a + b + c);
        int KLCover = (a + b + c) * day;
        day *= 3;

        while (KLCover < n)
        {
            KLCover += a;
            day++;
            if (KLCover >= n)
                break;
            KLCover += b;
            day++;
            if (KLCover >= n)
                break;
            KLCover += c;
            day++;
            if (KLCover >= n)
                break;
        }

        cout << day << "\n";
    }

    return 0;
}