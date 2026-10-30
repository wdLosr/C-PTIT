// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

int sd(int n)
{
    int m = 0;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (gcd(n, sd(n)) == 1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}