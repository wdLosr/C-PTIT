// wdLosr - Le Loc
#include <stdio.h>

void swap(int a[][11], int x, int y)
{
    for (int i = 1; i <= x; ++i)
    {
        for (int j = 1; j <= y; ++j)
        {
            if (a[i][j] == 1)
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }
} 

int main()
{
    int n;
    scanf("%d", &n);
    int a[11][11];
    for (int i = 1; i <= n; ++i)
    {
        char row[11];
        scanf("%s", row);
        for (int j = 1; j <= n; ++j)
        {
            a[i][j] = row[j - 1] - '0';
        }
    }
    int cnt = 0;
    for (int i = n; i >= 1; --i)
    {
        for (int j = n; j >= 1; --j)
        {
            if (a[i][j] == 1)
            {
                swap(a, i, j);
                ++cnt;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}