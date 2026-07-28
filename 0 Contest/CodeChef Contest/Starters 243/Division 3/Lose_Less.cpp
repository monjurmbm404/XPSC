#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int match, point;
        cin >> match >> point;
        int ans = match;

        for (int win = 0; win <= match; win++)
            for (int draw = 0; draw <= match; draw++)
                if (win + draw <= match && (win * 3) + draw == point)
                    ans = min(ans, match - win - draw);

        cout << ans << "\n";
    }
}
