// wdLosr - Le Loc
#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int t, T = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n + 5][m + 5];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Test %d:\n", T);
        for (int i1 = 0; i1 < n; ++i1)
        {
            for (int j1 = 0; j1 < m; ++j1)
            {
                for (int i2 = i1; i2 < n; ++i2)
                {
                    for (int j2 = j1; j2 < m; ++j2)
                    {
                        if (a[i1][j1] > a[i2][j2])
                        {
                            swap(&a[i1][j1], &a[i2][j2]);
                        }
                    }
                }
                printf("%d ", a[i1][j1]);
            }
            printf("\n");
        }
        T++;
    }
    return 0;
}