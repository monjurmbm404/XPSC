#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    //  (x1, y1) > (x2, y2) if and only if (x1 > x2) or (x1 == x2 and y1 < y2)  
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, y;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
            cin >> x >> y, v.push_back({x, y});
        sort(v.begin(), v.end(), comp);
        for (int i = 0; i < n; i++)
            cout << v[i].first << " " << v[i].second << "\n";
    }

    return 0;
}
