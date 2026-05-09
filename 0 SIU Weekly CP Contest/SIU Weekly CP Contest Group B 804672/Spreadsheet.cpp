#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r + 1, vector<int>(c + 1, 0));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> v[i][j];

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
            sum += v[i][j];
        v[i][c] = sum;
    }
    for (int i = 0; i < c; i++)
    {
        int sum = 0;
        for (int j = 0; j < r; j++)
            sum += v[j][i];
        v[r][i] = sum;
    }

    int sum = 0;

    for (int i = 0; i < r; i++)
        sum += v[i][c];
    v[r][c] = sum;

    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
            if(j != c){
                cout << v[i][j] << ' ';
            }else{
                cout << v[i][j];
            }
        cout << "\n";
    }

    return 0;
}