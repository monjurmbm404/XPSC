// https://marisaoj.com/problem/13

#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (isupper(c))
        cout << (char)tolower(c);
    else
        cout << (char)toupper(c);

    return 0;
}