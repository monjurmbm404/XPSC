// https://atcoder.jp/contests/abc204/tasks/abc204_b

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int total = 0;

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;

        if (A > 10)
            total += (A - 10);
    }

    cout << total;

    return 0;
}