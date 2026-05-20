#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n;
    multiset<int> ml;
    while (cin >> x)
        if (ml.empty())
            ml.insert(x);
        else
        {
            auto it = ml.upper_bound(x);
            if (it != ml.end())
                ml.erase(it);
            ml.insert(x);
        }
    cout << ml.size();
    return 0;
}