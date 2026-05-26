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
        string s;
        cin >> n >> k >> s;

        int One_count = 0;
        for (int c : s)
            if (c == '1')
                One_count++;

        cout << min(One_count + k, n) << "\n";
    }

    return 0;
}