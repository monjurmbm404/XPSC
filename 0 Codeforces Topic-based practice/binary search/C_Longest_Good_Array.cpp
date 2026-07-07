#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long d = r - l;

        int len = 1;
        long long need = 1;

        while (d >= need) {
            d -= need;
            need++;
            len++;
        }

        cout << len << '\n';
    }

    return 0;
}