// wdLosr - Le Loc
#include <stdio.h>
#define ll long long

ll max(ll a, ll b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, mx = 0, sum = 0;
        scanf("%lld", &n);
        ll a[n + 5];
        for (ll i = 0; i < n; ++i)
        {
            scanf("%lld", &a[i]);
            sum += a[i];
            if (sum < 0)
                sum = 0;
            mx = max(mx, sum);
        }
        printf("%lld\n", mx);
    }
    return 0;
}