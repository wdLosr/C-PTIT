// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

int cmp1(const void *ptr1, const void *ptr2)
{
    int *x = (int *)ptr1;
    int *y = (int *)ptr2;
    return *x - *y;
}

int cmp2(const void *ptr1, const void *ptr2)
{
    int *x = (int *)ptr1;
    int *y = (int *)ptr2;
    return *y - *x;
}

int main()
{
    int t, T = 0;
    scanf("%d", &t);
    while (t--)
    {
        T++;
        int n;
        scanf("%d", &n);
        int a[105], b[105], c[210];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &b[i]);
        }
        qsort(a, n, sizeof(int), cmp1);
        qsort(b, n, sizeof(int), cmp2);
        for (int i = 0; i < 2 * n; ++i)
        {
            if (i % 2 == 0)
            {
                c[i] = a[i / 2];
            }
            else
                c[i] = b[i / 2];
        }
        printf("Test %d:\n", T);
        for (int i = 0; i < 2 * n; ++i)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }
    return 0;
}