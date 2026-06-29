#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> freq(N + 1, 0);

    vector<vector<pair<int, int>>> changeAt(M + 1);

    for (int i = 1; i <= N; i++)
    {

        int A, D, B;
        cin >> A >> D >> B;

        if (D == 1)
            freq[B]++;
        else
            freq[A]++;

        if (A != B)
        {
            changeAt[D].push_back({A, B});
        }
    }

    int distinct = 0;

    for (int color = 1; color <= N; color++)
    {
        if (freq[color] > 0)
            distinct++;
    }

    for (int day = 1; day <= M; day++)
    {

        cout << distinct << "\n";

        if (day == M)
            break;

        for (auto bird : changeAt[day + 1])
        {

            int oldColor = bird.first;
            int newColor = bird.second;

            freq[oldColor]--;

            if (freq[oldColor] == 0)
                distinct--;

            if (freq[newColor] == 0)
                distinct++;

            freq[newColor]++;
        }
    }

    return 0;
}