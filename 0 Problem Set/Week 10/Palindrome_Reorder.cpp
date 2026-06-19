#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> cnt(26, 0);

    for(char c : s)
        cnt[c - 'A']++;

    int odd = 0;
    char mid = '#';

    for(int i = 0; i < 26; i++)
    {
        if(cnt[i] % 2)
        {
            odd++;
            mid = char('A' + i);
        }
    }

    if(odd > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string left = "";

    for(int i = 0; i < 26; i++)
        left.append(cnt[i] / 2, char('A' + i));

    string right = left;
    reverse(right.begin(), right.end());

    string middle = "";

    if(mid != '#')
        middle.append(cnt[mid - 'A'], mid);

    cout << left + middle + right << '\n';
}