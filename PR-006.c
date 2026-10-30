// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        char s;
        scanf("%d %d %c", &m, &n, &s);
        int a[m + 1], b[n + 1], c[n + m + 1];
        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < m; ++i)
        {
            c[i] = a[i];
        }
        for (int i = m; i < n + m; ++i)
        {
            c[i] = b[i - m];
        }
        if (s == 'F')
        {
            for (int i = 0; i < m; ++i)
            {
                printf("%d ", a[i]);
            }
            for (int i = 0; i < n; ++i)
            {
                printf("%d ", b[i]);
            }
        }
        if (s == 'A')
        {
            for (int i = 0; i < n; ++i)
            {
                printf("%d ", b[i]);
            }
            for (int i = 0; i < m; ++i)
            {
                printf("%d ", a[i]);
            }
        }
        if (s == 'T')
        {
            int tmp;
            for (int i = 0; i < n + m - 1; ++i)
            {
                for (int j = i + 1; j < n + m; ++j)
                {
                    if (c[i] > c[j])
                    {
                        tmp = c[i];
                        c[i] = c[j];
                        c[j] = tmp;
                    }
                }
            }
            for (int i = 0; i < n + m; ++i)
            {
                printf("%d ", c[i]);
            }
        }
        if (s == 'G')
        {
            int tmp;
            for (int i = 0; i < n + m - 1; ++i)
            {
                for (int j = i + 1; j < n + m; ++j)
                {
                    if (c[i] < c[j])
                    {
                        tmp = c[i];
                        c[i] = c[j];
                        c[j] = tmp;
                    }
                }
            }
            for (int i = 0; i < n + m; ++i)
            {
                printf("%d ", c[i]);
            }
        }
        printf("\n");
    }
    return 0;
}