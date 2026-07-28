// https://atcoder.jp/contests/abc317/tasks/abc317_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> a(N);

    int mn = INT_MAX, mx = INT_MIN;
    long long sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        sum += a[i];
    }

    long long expected = 1LL * (mn + mx) * (N + 1) / 2;

    cout << expected - sum << '\n';

    return 0;
}