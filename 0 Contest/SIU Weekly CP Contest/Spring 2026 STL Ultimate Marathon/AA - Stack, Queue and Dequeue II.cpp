#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        stack<char> st;
        bool flag = true;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else
            {
                if (st.empty())
                {
                    flag = false;
                    break;
                }
                char top = st.top();
                if (
                    c == ')' && top != '(' ||
                    c == '}' && top != '{' ||
                    c == ']' && top != '[')
                {
                    flag == false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty())
            flag = false;

        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}