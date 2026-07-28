#include <bits/stdc++.h>
using namespace std;

void equal(vector<int> v, int n, int &l, int &r)
{
    int i, j, k, sum = 0, sum1 = 0;
    i=0;

    for (j = 0; j < n; j++)
    {
        sum = sum + v[j];
    }

    for (j = 1; j < n - 1; j++)
    {
        sum1 = sum1 + v[j];

        if ((v[0] % 3) == (sum1 % 3))
        {
            if ((sum1 % 3) == ((sum - sum1 - v[0]) % 3))
            {
                l = i + 1;
                r = j + 1;
                break;
            }
        }
    }
}

void notequal(vector<int> v, int n, int &l, int &r)
{
    int i, j, k, sum = 0, sum1 = 0;
    i=0;

    for (j = 0; j < n; j++)
    {
        sum = sum + v[j];
    }

    for (j = 1; j < n - 1; j++)
    {
        sum1 = sum1 + v[j];

        if ((v[0] % 3) != (sum1 % 3))
        {
            if ((sum1 % 3) != ((sum - sum1 - v[0]) % 3))
            {
                if (((sum - sum1 - v[0]) % 3) != (v[0] % 3))
                {
                    l = i + 1;
                    r = j + 1;
                    break;
                }
            }
        }
    }
}

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

        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        int l = 0, r = 0;

        equal(v, n, l, r);

        if (l != 0)
        {
            cout << l << " " << r << "\n";
            continue;
        }
        notequal(v, n, l, r);

        cout << l << " " << r << "\n";
    }

    return 0;
}