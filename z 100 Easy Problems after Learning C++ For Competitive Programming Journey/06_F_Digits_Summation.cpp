// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <stdio.h>
int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int a = n % 10;
    long long int b = m % 10;
    printf("%lld", a + b);
    return 0;
}