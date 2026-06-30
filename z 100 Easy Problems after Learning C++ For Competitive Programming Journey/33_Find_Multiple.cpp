// https://atcoder.jp/contests/abc220/tasks/abc220_a

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = A; i <= B; i++) {
        if (i % C == 0) {
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}