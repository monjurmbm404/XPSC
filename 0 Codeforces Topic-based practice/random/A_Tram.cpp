#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, current = 0, capacity = 0, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a >> b, current -= a, current += b, capacity = max(capacity, current);
    cout << capacity << endl;

    return 0;
}