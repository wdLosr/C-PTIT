// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *ptr1, const void *ptr2)
{
    int *x = (int *)ptr1;
    int *y = (int *)ptr2;
    return *y - *x;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, cnt = 0;
        scanf("%d", &n);
        int a[100005];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), cmp);
        int max = 1e9;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < i + 2; ++j)
            {
                if (a[i] - a[j] <= max)
                {
                    max = a[i] - a[j];
                }
            }
        }
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < i + 2; ++j)
            {
                if (a[i] - a[j] == max)
                {
                    cnt++;
                }
            }
        }
        printf("%d %d", max, cnt);
        printf("\n");
    }
    return 0;
}