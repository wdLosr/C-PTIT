// wdLosr - Le Loc
#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int n;
    scanf("%d", &n);
    int minU = 50001, minD = 50001;
    int sumU = 0, sumD = 0;
    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        sumU += a;
        sumD += b;
        minU = min(minU, a);
        minD = min(minD, b);
    }
    sumU += minD;
    sumD += minU;
    printf("%d", max(sumU, sumD));
    return 0;
}