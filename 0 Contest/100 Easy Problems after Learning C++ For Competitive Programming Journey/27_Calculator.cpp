// https://marisaoj.com/problem/535

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    char op;

    cin >> a >> op >> b;

    if (op == '+') {
        cout << fixed << setprecision(3) << a + b;
    }
    else if (op == '-') {
        cout << fixed << setprecision(3) << a - b;
    }
    else if (op == '*') {
        cout << fixed << setprecision(3) << a * b;
    }
    else if (op == '/') {
        if (b == 0)
            cout << "ze";
        else
            cout << fixed << setprecision(3) << a / b;
    }
    else {
        cout << "ze";
    }

    return 0;
}