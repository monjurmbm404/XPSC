#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, prime = 0;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        set<int> st = {2, 3, 5, 7, 9};

        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (st.find(v[i] + v[j]) != st.end())
                    prime++;

        cout << prime << "\n";
    }

    return 0;
}