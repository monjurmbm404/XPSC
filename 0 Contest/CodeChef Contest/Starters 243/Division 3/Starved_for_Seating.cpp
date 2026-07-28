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
        int numberOfTeams, stadiumSeats;
        cin >> numberOfTeams >> stadiumSeats;

        vector<int> fans(numberOfTeams);
        int totalFans = 0;

        for (int &fanCount : fans)
            cin >> fanCount, totalFans += fanCount;

        int insufficientMatches = 0;

        for (int firstTeam = 0; firstTeam < numberOfTeams - 1; firstTeam++)
        {
            for (int secondTeam = firstTeam + 1; secondTeam < numberOfTeams; secondTeam++)
            {
                int otherTeamsFans = totalFans - fans[firstTeam] - fans[secondTeam];

                int totalAttendingFans = fans[firstTeam] + fans[secondTeam] + otherTeamsFans / 2;

                if (totalAttendingFans > stadiumSeats)
                    insufficientMatches++;
            }
        }

        cout << insufficientMatches << '\n';
    }

    return 0;
}