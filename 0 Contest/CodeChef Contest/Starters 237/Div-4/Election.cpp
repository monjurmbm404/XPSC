#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int n = ((N / 2) + 1) - K;

    if (n < 0)
        n = 0;

    cout << n << endl;

    return 0;
}