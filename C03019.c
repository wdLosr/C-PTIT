// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

int stn(int n)
{
    int m = 0, tmp = n;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    if (tmp == m)
    {
        return 1;
    }
    else
        return 0;
}

int sumten(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 10 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, cnt = 0;
        scanf("%d", &n);
        int l = pow(10, n - 1);
        int r = pow(10, n);
        for (int i = l; i < r; ++i)
        {
            if (stn(i) && sumten(i))
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}