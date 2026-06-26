#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;

        int i = 0, j = 0;

        while (i < n && j < n)
        {
            char target = s2[j];
            while (i < n && s1[i] != target)
                i++;

            if (s1[i] == target)
                j++;
        }
        if (j == n)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
