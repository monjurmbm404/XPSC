// https://codeforces.com/problemset/problem/1866/A

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int answer = INT_MAX;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        answer = min(answer, abs(x));
    }

    cout << answer;

    return 0;
}