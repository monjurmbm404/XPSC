// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            cnt++;
        }
    }
    if (cnt == 0) printf("%d", -1);
    return 0;
}