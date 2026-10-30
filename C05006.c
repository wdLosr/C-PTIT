// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int m, n, a, b;
    scanf("%d%d", &m, &n);
    int A[55][55];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d%d", &a, &b);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == a - 1)
                printf("%d ", A[b - 1][j]);
            else if (i == b - 1)
                printf("%d ", A[a - 1][j]);
            else
                printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}