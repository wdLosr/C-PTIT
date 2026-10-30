// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int t, T = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[25][25];
        int b[25][25];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (j <= i)
                {
                    a[i][j] = j + 1;
                }
                else
                    a[i][j] = 0;
            }
        }
        for (int i = 0; i < n; ++i)
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
                for (int k = 0; k < n; k++)
                    s += a[i][k] * b[k][j];
                printf("%d ", s);
            }
            printf("\n");
        }
        T++;
    }
    return 0;
}