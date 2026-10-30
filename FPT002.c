// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

void nhap(ll a[][100], ll m, ll n)
{
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
}

int main()
{
    ll m, n, p, q;
    scanf("%lld %lld %lld %lld", &m, &n, &p, &q);
    ll a[100][100], b[100][100], c[100][100], d[100][100], ab[100][100];
    nhap(a, m, n);
    nhap(b, n, p);
    nhap(c, p, q);
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < p; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                ab[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < q; j++)
        {
            for (ll k = 0; k < p; k++)
            {
                d[i][j] += ab[i][k] * c[k][j];
            }
            printf("%lld ", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}