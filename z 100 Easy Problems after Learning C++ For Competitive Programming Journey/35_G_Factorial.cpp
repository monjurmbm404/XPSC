// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        long long factorial = 1;
        for (int k = 1; k <= x; k++)  factorial *= k;
        printf("%lld\n", factorial);
    }
    return 0;
}