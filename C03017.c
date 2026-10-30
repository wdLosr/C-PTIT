// wdLosr - Le Loc
#include <stdio.h>
#define ll long long

int stn(ll n)
{
    ll m = 0, tmp = n;
    while (n != 0)
    {
        m = m*10 + n%10;
        n/=10;
    }
    if(m == tmp)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        if(stn(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}