#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, val, ans =0;
    cin >> n >> m;
    multiset<int> st;
    while (n--) cin >> val , st.insert(val);
    auto r = st.begin(), l = st.begin();
    while (r != st.end())
    {
        if(*r - *l ==  m) ans++, r++;
        else if(*r - *l > m) l++;
        else if (*r - *l < m) r++;
    }
    l++;
    while (l != st.end())
    {
        if(*r - *l ==  m) ans++, l++;
        else break;
    }
    cout << ans;
    return 0;
}