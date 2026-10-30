// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

int stn(int n)
{
    int m = 0, tmp = n, cnt = 0;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        if (n % 10 == 9)
        {
            cnt = 1;
        }
        n /= 10;
    }
    if (m == tmp && cnt == 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; ++i)
    {
        if (stn(i))
        {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n");
    printf("%d", cnt);
    return 0;
}