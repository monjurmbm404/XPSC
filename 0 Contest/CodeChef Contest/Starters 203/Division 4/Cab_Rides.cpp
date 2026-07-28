#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int cab = n / 4;
        int rest = n % 4;

        int total = (cab * 400);
        if (rest)
            total += max(rest * 100, 200);
        if (rest == 1 && cab > 0)
            total -= 100;

        cout << total << "\n";
    }
}
