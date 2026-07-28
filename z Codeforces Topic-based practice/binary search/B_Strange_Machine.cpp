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
        long long n, q, f = 0, idx = 0;
        string s;
        cin >> n >> q >> s;

        long long mx = 600;
        char arr[620];

        for (int i = 0; i < n; i++)
            if (s[i] == 'B')
                f = 1;
        for (int i = 1; i <= mx; i++)
        {
            arr[i] = s[idx];
            idx++;
            if (idx == n)
                idx = 0;
        }

        long long brr[q + 10];

        for (int i = 1; i <= q; i++)
            cin >> brr[i];

        for (int i = 1; i <= q; i++)
        {
            long long a = brr[i], sum = 0;
            if (f == 0)
            {
                cout << a << "\n";
                continue;
            }
            for (int j = 1; j <= mx; j++)
            {
                (arr[j] == 'A') ? (a--, sum++) : (a /= 2, sum++);
                if (a <= 0)
                    break;
            }
            cout << sum << "\n";
        }
    }

    return 0;
}