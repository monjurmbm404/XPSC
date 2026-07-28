// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int s,b;
    if (x > y)
    {
        s = y;
        b = x;
    }
    else
    {
        s = x;
        b = y;
    }
    int sum = 0;
    for (s; s <= b; s++)
    {
        bool l = true;
        int x = s;
        while (x != 0)
        {
            if (x % 10 != 4 && x % 10 != 7)
            {
                l = false;
                break;
            }
            x /= 10;
        }
        if (l)
        {
            if (sum == 0)printf("%d", s);
            else printf(" %d", s);
            sum++;
        }
    }
    if (sum == 0)printf("%d", -1);
    return 0;
}