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
        cin >> n;

        string s;
        s.push_back('0');
        for (int i = 2; i < n; i++)
            s.push_back('1');
        s.push_back('0');

        cout << s << "\n";
    }

    return 0;
}