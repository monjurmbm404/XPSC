#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long groups = (x + y) / 3;
        cout << groups + min(groups, y) << '\n';
    }

    return 0;
}