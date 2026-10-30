// wdLosr - Le Loc
#include <stdio.h>

int stn(int n)
{
    int m = 0, tmp = n;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    if (tmp == m)
        return 1;
    else
        return 0;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (stn(a) != stn(b))
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}