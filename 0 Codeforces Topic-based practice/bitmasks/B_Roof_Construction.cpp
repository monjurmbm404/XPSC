#include <bits/stdc++.h>
using namespace std;

int __MSB(int x)
{
    return (int)log2(x);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
            cout << 1 << " " << 0 << "\n";
        else
        {
            int cur = n - 1; 
            while (cur > 1)
            {
                cout << cur << " ";
                if (__MSB(cur - 1) != __MSB(cur))
                    break;
                cur--;
            }
            for (int i = 0; i < cur; i++)
                cout << i << " ";
            cout << "\n";
        }
    }
    return 0;
}