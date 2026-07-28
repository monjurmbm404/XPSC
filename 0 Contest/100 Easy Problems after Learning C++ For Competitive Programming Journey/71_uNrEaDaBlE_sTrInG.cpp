// https://atcoder.jp/contests/abc192/tasks/abc192_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (!islower(S[i]))
            {
                cout << "No\n";
                return 0;
            }
        }
        else
        {
            if (!isupper(S[i]))
            {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";

    return 0;
}