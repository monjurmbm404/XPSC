#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for(int &x : v) cin >> x;
        while (q--)
        {
            int i,x;
            cin >> i >> x;
            int ans =0;
            vector<int> temp = v;
            temp[i] = x;
            int cnt = n-1;
            while (cnt--)
            {
                ans+= temp[0];
                temp.pop_back();
            }
            cout << ans << "\n";
        }
        
    }
    

    return 0;
}