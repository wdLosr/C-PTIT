// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

ll Max(ll a, ll b)
{
    if (a > b)
        return a;
    else
        return b;
}

ll sntmax(ll n)
{
    ll max = -1;
    for (ll i = 2; i <= sqrt(n); ++i)
    {
        while (n % i == 0)
        {
            max = Max(max, i);
            n /= i;
        }
    }
    if (n > 1)
        max = Max(max, n);
    return max;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        printf("%lld", sntmax(n));
        printf("\n");
    }
    return 0;
}
