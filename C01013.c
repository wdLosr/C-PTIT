// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    int min = 1e8, max = 0, x;
    while (scanf("%d", &x) != -1)
    {
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }
    printf("%d %d", max, min);
    return 0;
}