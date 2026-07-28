// https://marisaoj.com/problem/538

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> negative, positive;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x < 0)
            negative.push_back(x);
        else
            positive.push_back(x);
    }

    for (int x : negative)
        cout << x << " ";

    for (int x : positive)
        cout << x << " ";

    return 0;
}