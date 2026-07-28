// https://atcoder.jp/contests/abc104/tasks/abc104_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main() {
    int R;
    cin >> R;

    if (R < 1200)
        cout << "ABC";
    else if (R < 2800)
        cout << "ARC";
    else
        cout << "AGC";

    return 0;
}