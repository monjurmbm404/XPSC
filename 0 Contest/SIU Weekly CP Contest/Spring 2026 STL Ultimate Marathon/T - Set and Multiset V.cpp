#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, flag = 1, i = 0; char c; cin >> n; set<char> st;
    while (n--) cin >> c, st.insert(tolower(c));
    cout << ((st.size() == 26) ? "YES" : "NO") << "\n";
    return 0;
}