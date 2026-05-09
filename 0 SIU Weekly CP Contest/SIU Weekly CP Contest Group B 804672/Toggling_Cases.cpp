#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    for (char &c : s) {
        if (islower(c)) c = toupper(c);
        else if (isupper(c)) c = tolower(c);
    }

    cout << s << "\n";
    return 0;
}