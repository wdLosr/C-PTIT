// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

int main()
{
    int t, T = 1;
    scanf("%d", &t);
    while (t--)
    {
        printf("Test %d:\n", T);
        int n, m;
        scanf("%d%d", &n, &m);
        int a[101][101];
        int sumrow[101] = {0};
        int sumcol[101] = {0};
        int icol, irow;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
                sumrow[i] += a[i][j];
            }
        }
        int Max1 = sumrow[0];
        for (int i = 0; i < n; i++)
        {
            if (sumrow[i] >= Max1)
            {
                Max1 = sumrow[i];
                irow = i;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j != irow)
                {
                    sumcol[i] += a[j][i];
                }
            }
        }
        int Max2 = sumcol[0];
        for (int i = 0; i < m; i++)
        {
            if (sumcol[i] >= Max2)
            {
                Max2 = sumcol[i];
                icol = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
            if (i != irow && j != icol)
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        T++;
    }
    return 0;
}