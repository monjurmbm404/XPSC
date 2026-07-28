#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, mx = INT_MIN, mn = INT_MAX, maxPos = 0, minPos = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)  mx = a[i], maxPos = i;
        if (a[i] <= mn)  mn = a[i], minPos = i;
    }

    int ans = maxPos + (n - 1 - minPos);
    if (maxPos > minPos) ans--;

    cout << ans << endl;

    return 0;
}