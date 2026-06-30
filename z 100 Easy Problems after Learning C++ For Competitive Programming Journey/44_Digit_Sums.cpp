// https://atcoder.jp/contests/abc101/tasks/abc101_b?lang=en

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int temp = N, sum = 0;
    while (temp > 0)
        sum += temp % 10, temp /= 10;
    cout << ((N % sum == 0) ? "Yes" : "No");

    return 0;
}