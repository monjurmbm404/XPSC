// https://atcoder.jp/contests/abc106/tasks/abc106_b?lang=en

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int countNumbers = 0;
 
    for (int i = 1; i <= N; i += 2) {
        int divisors = 0;
 
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                divisors++;
        }
 
        if (divisors == 8)
            countNumbers++;
    }

    cout << countNumbers;

    return 0;
}