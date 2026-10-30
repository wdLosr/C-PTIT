// wdLosr - Le Loc
#include <stdio.h>
#define ll long long

ll fibo(ll n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    ll f0 = 0, f1 = 1, f;
    for (int i = 2; i <= 92; ++i)
    {
        f = f0 + f1;
        if (f == n)
        {
            return 1;
        }
        else
        {
            f0 = f1;
            f1 = f;
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        if (fibo(n))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}