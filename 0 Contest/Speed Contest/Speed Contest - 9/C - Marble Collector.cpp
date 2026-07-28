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
        int n, m, x;
        cin >> n >> m;
        set<int> st;
        while (n--)
        {
            cin >> x, st.insert(x);
            /* code */
        }

        int ans = m - st.size();
        if (ans <= 0)
            cout << 0;
        else
            cout << ans;
        cout << "\n";
    }

    return 0;
}