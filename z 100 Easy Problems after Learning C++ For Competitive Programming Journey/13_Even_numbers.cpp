// https://marisaoj.com/problem/314

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int start = (n % 2 == 0) ? n : n - 1;

    for (int i = start; i >= 2; i -= 2) {
        cout << i;
        if (i > 2) cout << " ";
    }

    return 0;
}