// https://marisaoj.com/problem/534

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r;
    const double pi = 3.14;

    cin >> r;

    double circumference = 2 * pi * r;
    double area = pi * r * r;

    cout << fixed << setprecision(3)
         << circumference << " " << area;

    return 0;
}