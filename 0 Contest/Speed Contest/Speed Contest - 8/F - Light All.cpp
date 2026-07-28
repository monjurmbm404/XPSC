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
        string s;
        cin >> n >> s;
        bool flag = true;
        int possible = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                possible++;
            else if (s[i] == '0')
                possible--;
            if(possible > 1) possible =1;
            if(possible == -2) {
                flag = false;
                break;
            }
        }
        if (flag && (possible > -1) )
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }

    return 0;
}