// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n, t = 0, a[100];
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    while (n != 0)
    {
        if (n % 2 == 0)
            a[t++] = 0;
        else
            a[t++] = 1;
        n /= 2;
    }
    for (int i = t - 1; i >= 0; --i)
        printf("%d", a[i]);
}