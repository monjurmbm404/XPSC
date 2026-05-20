#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n), pos;
    for (int &x : v)
        cin >> x;

    stack<pair<int, int>> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top().first >= v[i])
            st.pop();

        if (st.empty())
            cout << 0 << " ";
        else
            cout << st.top().second << " ";

        st.push({v[i], i + 1});
    }

    return 0;
}