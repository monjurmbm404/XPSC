// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arrayA[n], arrayB[n];
    for (int k = 0; k < n; k++) scanf("%d", &arrayA[k]);
    for (int k = 0; k < n; k++) scanf("%d", &arrayB[k]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrayA[i] > arrayA[j])
            {
                int temporary = arrayA[i];
                arrayA[i] = arrayA[j];
                arrayA[j] = temporary;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrayB[i] > arrayB[j])
            {
                int temporary = arrayB[i];
                arrayB[i] = arrayB[j];
                arrayB[j] = temporary;
            }
        }
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arrayA[i] != arrayB[i])
        {
            flag = false;
            break;
        }
    }
    if (flag) printf("yes\n");
    else printf("no\n");
    return 0;
}