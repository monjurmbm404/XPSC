// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    long long summation = 0;
    for (int k = 0; k < n; k++) summation += s[k] - '0'; 
    printf("%lld\n", summation);
    return 0;
}