// https://atcoder.jp/contests/abc104/tasks/abc104_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    if (S.size() < 4)
    {
        cout << "WA\n";
        return 0;
    } 
    if (S[0] != 'A')
    {
        cout << "WA\n";
        return 0;
    } 
    int cntC = 0;
    int posC = -1;

    for (int i = 2; i < (int)S.size() - 1; i++)
    {
        if (S[i] == 'C')
        {
            cntC++;
            posC = i;
        }
    }

    if (cntC != 1)
    {
        cout << "WA\n";
        return 0;
    }
 
    for (int i = 0; i < (int)S.size(); i++)
    {
        if (i == 0 || i == posC)
            continue;

        if (!islower(S[i]))
        {
            cout << "WA\n";
            return 0;
        }
    }

    cout << "AC\n";

    return 0;
}