// https://atcoder.jp/contests/abc313/tasks/abc313_a

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int p1, mx = 0;
    cin >> p1;

    for (int i = 2; i <= N; i++) {
        int p;
        cin >> p;
        mx = max(mx, p);
    }

    if (p1 > mx)
        cout << 0;
    else
        cout << mx - p1 + 1;

    return 0;
}