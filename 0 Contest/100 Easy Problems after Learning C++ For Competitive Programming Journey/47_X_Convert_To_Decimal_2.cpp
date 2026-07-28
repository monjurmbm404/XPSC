// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, ones = 0;
        cin >> n;

        while (n > 0)
        {
            if (n % 2 == 1)
                ones++;
            n /= 2;
        }

        cout << ((1LL << ones) - 1) << endl;
    }

    return 0;
}