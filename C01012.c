// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    ll max = 0, x;
    while (scanf("%lld", &x) != -1)
    {
        if (x > max)
            max = x;
    }
    printf("%lld", max);
    return 0;
}