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
        int n, k;
        cin >> n >> k;

        string s;

        cin >> s;

        int last1 = -1e9, toProtect = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                int dif = i - last1;

                if (dif >= k)
                {
                    toProtect++;
                }
                last1 = i;
            }
        }

        cout << toProtect << "\n";
    }

    return 0;
}