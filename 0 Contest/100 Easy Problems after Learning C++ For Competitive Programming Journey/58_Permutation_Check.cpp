// https://atcoder.jp/contests/abc205/tasks/abc205_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> freq(N + 1, 0);

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= N; i++)
    {
        if (freq[i] != 1)
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";

    return 0;
}