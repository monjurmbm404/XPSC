#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q, level;
    set<int> st;
    cin >> n;
    cin >> p;
    while (p--)
        cin >> level, st.insert(level);
    cin >> q;
    while (q--)
        cin >> level, st.insert(level);
    cout << ((st.size() == n) ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}