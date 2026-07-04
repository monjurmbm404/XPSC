#include <bits/stdc++.h>
using namespace std;

int zeroInMiddle(int mid, vector<int> &v, int n)
{
    unordered_set<int> st;
    int d = 0;
    int mex = 0;
    while (mid - d >= 0 && mid + d < n && v[mid - d] == v[mid + d])
    {
        st.insert((v[mid - d]));
        while (st.count(mex))
            mex++;
        d++;
    }
    return mex;
}

int bothZero(int l, int r, vector<int> &v, int n)
{
    unordered_set<int> st;
    int d = 0;
    int mex = 0;
    while (l + d <= r - d && v[l + d] == v[r - d])
    {
        st.insert((v[l + d]));
        while (st.count(mex))
            mex++;
        d++;
    }
    if (l + d <= r - d)
        return -1;
    d = 1;
    while (l - d >= 0 && r + d < n && v[l - d] == v[r + d])
    {
        st.insert((v[l - d]));
        while (st.count(mex))
            mex++;
        d++;
    }

    return mex;
}

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
        vector<int> v(n + n);

        for (int &x : v)
            cin >> x;

        int l = -1, r = -1;

        for (int i = 0; i < n + n; i++)
            if (v[i] == 0)
                (l == -1) ? l = i : r = i;

        int ans = 1;

        ans = max(ans, zeroInMiddle(l, v, n + n));
        ans = max(ans, zeroInMiddle(r, v, n + n));
        ans = max(ans, bothZero(l, r, v, n + n));

        cout << ans << "\n";
    }

    return 0;
}