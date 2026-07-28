#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    for (long long &x : v)
        cin >> x, sum += x;

    auto max_val = max_element(v.begin(), v.end());

    cout << (max(sum, (*max_val * 2)));

    return 0;
}