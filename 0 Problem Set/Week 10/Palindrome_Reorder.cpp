#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> mp;

    for (char c : s)
        mp[c]++;

    int odd = 0;

    for (auto [val, cnt] : mp)
        if (cnt % 2 == 1)
            odd++;

    if (odd > 1)
        cout << "NO SOLUTION";
    else
    {
        string s1;
        char middle_char;
        int middle_char_count = 0;

        for (auto [val, cnt] : mp)
            if (cnt % 2 == 1)
                middle_char = val, middle_char_count = cnt;
            else
                while (cnt)
                    s1.push_back(val), cnt -= 2;

        string s2 = s1;
        reverse(s2.begin(), s2.end());
        while (middle_char_count--)
            s1.push_back(middle_char);

        cout << s1 + s2;
    }

    return 0;
}