// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

void lv(char a[], int f[])
{
    int i = 0, n = strlen(a);
    while (i < n)
    {
        int base = 0, et = 0;
        if (a[i] < '0' || a[i] > '9')
        {
            i++;
            continue;
        }
        while (i < n && a[i] >= '0' && a[i] <= '9')
        {
            base = base * 10 + a[i] - '0';
            i++;
        }
        while (a[i] < '0' || a[i] > '9')
        {
            i++;
        }
        while (i < n && a[i] >= '0' && a[i] <= '9')
        {
            et = et * 10 + a[i] - '0';
            i++;
        }
        f[et] += base;
    }
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        int f[10005] = {}, check = 0;
        char a[100000], b[100000];
        gets(a);
        gets(b);
        lv(a, f);
        lv(b, f);
        for (int i = 10000; i >= 0; --i)
        {
            if (f[i])
            {
                if (check)
                {
                    printf(" + ");
                }
                printf("%d*x^%d", f[i], i);
                if (!check)
                {
                    check = 1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}