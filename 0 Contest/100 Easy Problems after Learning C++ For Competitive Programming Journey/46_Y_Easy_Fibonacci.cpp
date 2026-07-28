// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

#include <stdio.h>
int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 1;
    long long a = 0, b = 1, next;
    for (int k = 1; k <= t; k++)
    {
        if (k == 1) printf("%lld", a);
        else if (k == 2) printf(" %lld", b);
        else
        {
            next = a + b;
            printf(" %lld", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
    return 0;
}