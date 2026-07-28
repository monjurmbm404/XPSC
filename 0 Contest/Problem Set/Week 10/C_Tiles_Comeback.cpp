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

        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        vector<int> start_color, end_color;

        for (int i = 0; i < n; i++)
            if (v[i] == v[0])
                start_color.push_back(i);

        for (int i = n - 1; i >= 0; i--)
            if (v[i] == v[n - 1])
                end_color.push_back(i);

        if (start_color.size() >= k && end_color.size() >= k)
        {
            if (v[0] == v[n - 1])
                cout << "YES\n";
            else if (start_color[k - 1] < end_color[k - 1])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}