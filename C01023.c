// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

void check(ll n)
{
    int max = -1, min = 10;
    while (n != 0)
    {
        if (n % 10 < min)
            min = n % 10;
        if (n % 10 > max)
            max = n % 10;
        n /= 10;
    }
    printf("%d %d", max, min);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        check(n);
        printf("\n");
    }
    return 0;
}