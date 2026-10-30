// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long
void nhap(ll a[][100],ll m,ll n)
{
	for(ll i=0;i<m;i++)
	{
		for(ll j=0;j<n;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
}
int main()
{
	ll m,n,p;
	scanf("%lld %lld %lld",&m,&n,&p);
	ll a[100][100],b[100][100],c[100][100];
	nhap(a,m,n);
	nhap(b,n,p);
	for(ll i=0;i<m;i++)
	{
		for(ll j=0;j<p;j++)
		{
			for(ll k=0;k<n;k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			printf("%lld ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}