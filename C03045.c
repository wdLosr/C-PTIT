// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

ll max(ll a, ll b)
{
    if (a > b)
        return a;
    else
        return b;
}

int snt(ll n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        ll res = 0;
        if (snt(n))
        {
            res = n;
        }
        else
        {
            for (ll i = 2; i <= sqrt(n); ++i)
            {
                int cnt = 0;
                while (n % i == 0)
                {
                    n /= i;
                    ++cnt;
                }
                if (cnt != 0)
                {
                    res = max(res, i);
                }
            }
            if (n > 1)
                res = max(res, n);
        }
        printf("%lld\n", res);
    }
    return 0;
}