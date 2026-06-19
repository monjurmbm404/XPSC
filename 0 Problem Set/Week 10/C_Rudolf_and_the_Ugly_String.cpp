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
        int n, cnt = 0;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n;)
        {
            if (i + 4 < n && s.substr(i, 5) == "mapie")
                cnt++, i += 5;
            else if (i + 2 < n && (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie"))
                cnt++, i += 3;
            else
                i++;
        }

        cout << cnt << "\n";
    }

    return 0;
}