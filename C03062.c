// wdLosr - Le Loc
#include <stdio.h>

#define ll long long

ll GCD(ll a, ll b)
{
    if(b == 0) return a;
    else return GCD(b, a%b);
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        ll res = 1;
        for (int i = n; i <= m; i++)
        {
            ll tmp = GCD(res, i);
            res = res * i / tmp;
        }
        printf("%lld\n", res);
    }    
    return 0;
}