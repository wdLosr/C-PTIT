// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

int sntv(ll n)
{
    ll m = 0;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

int snt(ll n)
{
    if (n < 1)
        return 0;
    for (ll i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    ll a[10005];
    for (int i = 0; i < n; ++i)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        if (snt(a[i]) && snt(sntv(a[i])))
        {
            printf("1 ");
        }
        else
            printf("0 ");
    }
    return 0;
}