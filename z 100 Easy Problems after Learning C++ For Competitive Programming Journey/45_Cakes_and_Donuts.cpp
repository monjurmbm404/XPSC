// https://atcoder.jp/contests/abc105/tasks/abc105_b?lang=en

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool possible = false;
 
    for (int cakes = 0; cakes * 4 <= N; cakes++) {
        int remaining = N - cakes * 4;

        if (remaining % 7 == 0) {
            possible = true;
            break;
        }
    }

    if (possible)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}