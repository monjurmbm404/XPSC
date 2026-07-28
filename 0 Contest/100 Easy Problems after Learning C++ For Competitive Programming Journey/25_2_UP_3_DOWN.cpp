// https://atcoder.jp/contests/abc326/tasks/abc326_a

#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (Y > X) {
        if (Y - X <= 2)
            cout << "Yes";
        else
            cout << "No";
    }
    else {
        if (X - Y <= 3)
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}