#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    char mx = *max_element(s.begin(), s.end());

    for (char c : s) {
        if (c == mx)
            cout << c;
    }

    return 0;
}