#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    while (cin >> a >>b >> c)
    {
        if(a == -1 && b == -1 && c == -1) break;
        if (a == -1 || b == -1)
        {
            cout << "F\n"; 
        }else{
            int sum = a + b;
            if(sum >= 80) cout << "A\n";
            else if(sum >= 65 ) cout << "B\n";
            else if(sum >= 50 ) cout << "C\n";
            else if(sum >= 30 ) {
                if(c >= 50 ) 
                    cout << "C\n";
                else
                    cout << "D\n";
            
            }
            else  cout << "F\n";
        }

    }
    

    return 0;
}