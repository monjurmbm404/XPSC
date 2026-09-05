#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int > v(n);
    for (int &x : v) cin >> x;

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        auto small = lower_bound(v.begin(), v.end(), x);

        if(small == v.begin()) cout << "X ";
        else cout << *(small - 1) << " ";

        auto big = upper_bound(v.begin(), v.end(), x);

        if(big == v.end()) cout << "X\n";
        else cout << *big  << "\n";

        
    }
    

    return 0;
}