#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, q;
    char c;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> q >> s;
        int longest_char_length = 1;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
            }
            else
            {
                if (cnt > longest_char_length)
                {
                    longest_char_length = cnt;
                }
                cnt = 1;
            }
        }

        int last_char_length = 1;
        char last_char = s.back();

        for (int i = n - 2; i >= 0; i--)
        {
            if (last_char == s[i])
            {
                last_char_length++;
            }
            else
            {
                break;
            }
        }
        cout << max(last_char_length, longest_char_length) << " ";
        while (q--)
        {
            cin >> c;
            if (c == last_char)
            {
                last_char_length++;
            }
            else
            {
                if (last_char_length > longest_char_length)
                {
                    longest_char_length = last_char_length;
                }
                last_char_length = 1;
                last_char = c;
            }
            cout << max(last_char_length, longest_char_length) << " ";
        }
        cout << "\n";
    }

    return 0;
}