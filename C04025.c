// wdLosr - Le Loc
#include <stdio.h>

int cmp(const void *ptr1, const void *ptr2)
{
    int *x = (int *)ptr1;
    int *y = (int *)ptr2;
    return *x - *y;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[105];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}