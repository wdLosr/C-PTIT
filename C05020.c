// wdLosr - Le Loc
#include <stdio.h>
#define ll long long

int main()
{
    ll fibo[100];
    fibo[0] = 0, fibo[1] = 1;
    for (int i = 2; i <= 92; ++i)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int n;
    scanf("%d", &n);
    ll a[101][101];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int up = 0;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int i = c1; i <= c2; i++)
        {
            a[h1][i] = fibo[up];
            ++up;
        }
        ++h1;
        for (int i = h1; i <= h2; i++)
        {
            a[i][c2] = fibo[up];
            ++up;
        }
        --c2;
        for (int i = c2; i >= c1; i--)
        {
            a[h2][i] = fibo[up];
            ++up;
        }
        --h2;
        for (int i = h2; i >= h1; i--)
        {
            a[i][c1] = fibo[up];
            ++up;
        }
        ++c1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}