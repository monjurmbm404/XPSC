// https://atcoder.jp/contests/abc206/tasks/abc206_c

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    map<long long, long long> freq;

    for (int i = 0; i < N; i++)
    {
        long long x;
        cin >> x;
        freq[x]++;
    }

    long long totalPairs = 1LL * N * (N - 1) / 2;

    for (auto [value, count] : freq)
    {
        totalPairs -= count * (count - 1) / 2;
    }

    cout << totalPairs << '\n';

    return 0;
}