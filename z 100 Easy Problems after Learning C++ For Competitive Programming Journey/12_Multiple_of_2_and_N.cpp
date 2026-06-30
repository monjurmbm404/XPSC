// https://atcoder.jp/contests/abc102/tasks/abc102_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N % 2 == 0)
        cout << N;
    else
        cout << 2 * N;

    return 0;
}