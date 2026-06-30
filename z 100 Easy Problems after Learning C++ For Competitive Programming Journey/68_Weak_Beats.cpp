// https://atcoder.jp/contests/abc323/tasks/abc323_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    for (int i = 1; i < 16; i += 2)
        if (S[i] == '1')
        {
            cout << "No\n";
            return 0;
        }

    cout << "Yes\n";

    return 0;
}