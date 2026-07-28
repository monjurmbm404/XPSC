#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long ans = 0, length = 0;
    while (n--)
    {
        length *= 10;
        length += 9;
    }

    for (long long i = 0; i <= length; i++)
    {
        string s = to_string(i);
        bool flag = true;
        for (char c : s)
        {
            if (c != '7' && c != '8')
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans++;
    }

    cout << ans;
    return 0;
}