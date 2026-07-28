// https://marisaoj.com/problem/5

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int smallest = min({a, b, c});
    int biggest = max({a, b, c});

    cout << smallest << " " << biggest;

    return 0;
}