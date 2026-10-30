// wdLosr - Le Loc
#include <stdio.h>
#define ll long long
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    ll acc = a * b;
    return acc / gcd(a, b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, x = 1;
        scanf("%lld", &n);
        for (ll i = 2; i <= n; ++i)
        {
            x = lcm(x, i);
        }
        printf("%lld\n", x);
    }
    return 0;
}