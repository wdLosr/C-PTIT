// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long
int a[2000001] = {0};

void sang()
{
    for (int i = 2; i * i <= 2000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j <= 2000000; j += i)
            {
                if (a[j] == 0)
                {
                    a[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= 2000000; i++)
    {
        if (a[i] == 0) a[i] = i;
    }
}

int sumdivitor(int n)
{
    int s = 0;
    while (n != 1)
    {
        s += a[n];
        n /= a[n];
    }
    return s;
}

int main()
{
    sang();
    int n;
    scanf("%d", &n);
    ll sum = 0;
    while (n--)
    {
        int x;
        scanf("%d", &x);
        sum += sumdivitor(x);
    }
    printf("%lld", sum);
    return 0;
}