// https://marisaoj.com/problem/10

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double distance = sqrt((x2 - x1) * (x2 - x1) +
                           (y2 - y1) * (y2 - y1));

    cout << fixed << setprecision(2) << distance;

    return 0;
}