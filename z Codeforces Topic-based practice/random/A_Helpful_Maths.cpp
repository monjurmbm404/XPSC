#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<char> v;

    for (char c : s)
        if (c != '+')
            v.push_back(c);
    sort(v.begin(), v.end());
    cout << v[0];
    for (int i = 1; i < v.size(); i++)
        cout << "+" << v[i];

    return 0;
}