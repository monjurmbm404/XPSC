// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q\

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    string word = "";
    vector<string> result;

    for (char c : s)
    {
        if (c == ' ')
        {
            reverse(word.begin(), word.end());
            result.push_back(word);
            word.clear();
        }
        else
        {
            word += c;
        }
    }
 
    reverse(word.begin(), word.end());
    result.push_back(word);

    for (int i = 0; i < (int)result.size(); i++)
    {
        if (i) cout << " ";
        cout << result[i];
    }

    return 0;
}