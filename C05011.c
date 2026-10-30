// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int t, T = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n + 5][m + 5];
        int b[m + 5][n + 5];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                b[i][j] = a[j][i];
            }
        }
        printf("Test %d:\n", T);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int s = 0;
                for (int k = 0; k < m; k++)
                    s += a[i][k] * b[k][j];
                printf("%d ", s);
            }
            printf("\n");
        }
        T++;
        printf("\n");
    }
    return 0;
}