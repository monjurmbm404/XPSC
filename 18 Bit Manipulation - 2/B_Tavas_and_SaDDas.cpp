#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int bit = s.size();

    int full = 0;

    for (int i = 1; i < bit; i++)
    {
        full += (1 << i);
    }

    int partial = 0;
    reverse(s.begin(), s.end());

    for (int i = 0; i < bit; i++)
    {
        if (s[i] == '7')
        {
            partial += (1 << i);
        }
    }

    int index = full + partial + 1;
    cout << index;

    return 0;
}