// wdLosr - Le Loc
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[105][105];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int h1 = 1, h = n, c1 = 1, c = m;
        while (h1 <= (n + 1) / 2 && c1 <= (m + 1) / 2)
        {
            for (int i = c1; i <= c; i++)
            {
                printf("%d ", a[h1][i]);
            }
            for (int i = h1 + 1; i <= h; i++)
            {
                printf("%d ", a[i][c]);
            }
            if (h > h1)
            {
                for (int i = c - 1; i >= c1; i--)
                {
                    printf("%d ", a[h][i]);
                }
            }
            if (c > c1)
            {
                for (int i = h - 1; i >= h1 + 1; i--)
                {
                    printf("%d ", a[i][c1]);
                }
            }
            h1++;
            c1++;
            h--;
            c--;
        }
        printf("\n");
    }
}