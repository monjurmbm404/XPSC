#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int n,q;
        cin >> n >> q;
        vector<int> v(n);
        for(int &x : v) cin >> x;
        
        while (q--) {
        int x;
        cin >> x;

        auto it = lower_bound(v.begin(), v.end(), x);

        if (it != v.end() && *it == x)
            cout << (it - v.begin()) << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}

///