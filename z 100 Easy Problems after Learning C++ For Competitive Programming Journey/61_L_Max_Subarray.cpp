// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int st = 0; st < n; st++)
        {
            for (int end = st; end < n; end++)
            {
                int max = INT_MIN;
                for (int k = st; k <= end; k++)
                {
                    if (max < a[k])
                    {
                        max = a[k];
                    }
                }
                cout << max << " ";
            }
        }
        cout << endl;
    }
    return 0;
}