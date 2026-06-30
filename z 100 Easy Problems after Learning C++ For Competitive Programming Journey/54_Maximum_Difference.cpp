// https://atcoder.jp/contests/abc102/tasks/abc102_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    long long mn = LLONG_MAX, mx = LLONG_MIN;

    for (int i = 0; i < N; i++)
    {
        long long x;
        cin >> x;

        mn = min(mn, x);
        mx = max(mx, x);
    }

    cout << mx - mn << '\n';

    return 0;
}