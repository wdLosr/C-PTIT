// wdLosr - Le Loc
#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    int minr = 1e9, minl = 1e9;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        if (a < minl)
            minl = a;
        if (b < minr)
            minr = b;
    }
    printf("%lld", (long long)minl * minr);
}