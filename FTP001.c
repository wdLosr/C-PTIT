// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1][n + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = j - i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 0)
                a[i][j] = 0;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}