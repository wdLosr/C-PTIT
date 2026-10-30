// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    ll x, y, ans;
    while (scanf("%lld%lld", &x, &y) != -1)
    {
        ll k = abs(y - x);
        if (k == 3)
        {
            printf("3\n");
            continue;
        }
        ll x = sqrt(k);
        ll n = x * (x - 1);
        if (k - n > 2 * x)
        {
            ans = 2 * x + 1;
        }
        else if (k - n > x)
        {
            ans = 2 * x;
        }
        else
            ans = 2 * x - 1;
        printf("%lld\n", ans);
    }
    return 0;
}