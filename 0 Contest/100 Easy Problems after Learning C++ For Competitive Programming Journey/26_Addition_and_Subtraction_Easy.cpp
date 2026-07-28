// https://atcoder.jp/contests/abc050/tasks/abc050_a

#include <iostream>
using namespace std;

int main() {
    long long A, B;
    char op;

    cin >> A >> op >> B;

    if (op == '+')
        cout << A + B << endl;
    else
        cout << A - B << endl;

    return 0;
}