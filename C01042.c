// wdLosr - Le Loc
#include <stdio.h>
#define ll long long

ll gt(int n)
{
    ll gt1 = 1;
    for (int i = 1; i <= n; ++i)
    {
        gt1 *= (long long)i;
    }
    return gt1;
}
int main()
{
    int n;
    scanf("%d", &n);
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += gt(i);
    }
    printf("%lld", sum);
    return 0;
}