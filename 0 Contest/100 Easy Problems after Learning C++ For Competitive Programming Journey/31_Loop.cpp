// https://marisaoj.com/problem/499

#include <iostream>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    for (int i = l; i <= r; i++) {
        cout << i;
        if (i != r) cout << " ";
    }

    return 0;
}