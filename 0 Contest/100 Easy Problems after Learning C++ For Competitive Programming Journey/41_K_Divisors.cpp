// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        if (n % j == 0)   printf("%d\n", j);
    }
    return 0;
}