// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U

#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int arrayA[x], arrayB[y];
    for (int k = 0; k < x; k++) scanf("%d", &arrayA[k]);
    for (int k = 0; k < y; k++) scanf("%d", &arrayB[k]);
    int m = 0, n = 0;
    while (m < x && n < y)
    {
        if (arrayA[m] == arrayB[n]) n++;
        m++;
    }
    if (n == y) printf("YES\n");
    else printf("NO\n");
    return 0;
}