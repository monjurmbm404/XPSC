// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z, z2;
    scanf("%lf %lf %lf %lf", &x, &y, &z, &z2);

    double left = y * log(x);
    double right = z2 * log(z);

    if (fabs(left - right) < 1e-12)
        printf("NO");
    else if (left > right)
        printf("YES");
    else
        printf("NO");

    return 0;
}