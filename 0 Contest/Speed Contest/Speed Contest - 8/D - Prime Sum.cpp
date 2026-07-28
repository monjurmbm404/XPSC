#include <bits/stdc++.h>
using namespace std;
set<int> prime = {2, 3, 5, 7, 9};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (prime.find(v[i] + v[j]) != prime.end())
                    cnt++;

        cout << cnt << "\n";
    }

    return 0;
}