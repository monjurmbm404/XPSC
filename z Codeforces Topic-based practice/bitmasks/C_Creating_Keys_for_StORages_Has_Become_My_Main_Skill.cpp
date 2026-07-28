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
        int n, x;
        cin >> n >> x;

        vector<long long> a;

        for (long long i = 0; i < n; i++)
        {
            if ((i | x) != x)
            {
                a.resize(n);
                break;
            }
            a.push_back(i);
        }

        long long OR = 0;
        for (int val : a)
            OR |= val;

        if (x != OR)
        {
            a.pop_back();
            a.push_back(x);
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}