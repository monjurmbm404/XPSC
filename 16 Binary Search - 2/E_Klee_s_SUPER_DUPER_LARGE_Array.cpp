#include <bits/stdc++.h>
using namespace std;
long long n,k;
long long sum(long long f, long long s){
    if(f ==s) return f;
    return((f+s) * (s-f+1)) / 2LL;
}

bool good(long long m){
    if(sum(k,m) <= sum(m+1, k+n-1) ) return true;
    else return false;
}
bool good2(long long m){
    if(sum(k,m-1) >= sum(m, k+n-1) ) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long i, j, l, z = 0, x = 0, r, c = 0, ans = 0, m, y, q ;
        cin >> n >> k;

        l = k;
        r = k + n;

        while (l + 1 < r)
        {
            m = (l + r) / 2;
            if(good(m)) l =m;
            else r =m;
        
        }

        long long l2 =k, r2 = k+n;

        while (l2 +1 < r2)
        {
            m = (l2 + r2) /2;
            if(good2(m)) r2 = m;
            else l2 = m;
        }
        

        cout << min(sum(l+1, n+k-1) - sum(k, l), sum(k, r2-1) - sum(r2, n+k-1)) << "\n";
    }

    return 0;
}