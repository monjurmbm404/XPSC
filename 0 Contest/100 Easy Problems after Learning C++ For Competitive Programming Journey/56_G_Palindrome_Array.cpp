// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d", &t);
    int mainArray[t];
    int copyArrray[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &mainArray[i]);
        copyArrray[i] = mainArray[i];
    }
    int l = 0, r = t - 1;
    while (l < r)
    {
        int tmp = mainArray[l];
        mainArray[l] = mainArray[r];
        mainArray[r] = tmp;
        l++, r--;
    }
    bool flag = true;
    for (int i = 0; i < t; i++)
    {
        if (mainArray[i] != copyArrray[i])
        {
            flag = false;
            break;
        }
    }
    if (flag) printf("YES");
    else printf("NO");
    return 0;
}