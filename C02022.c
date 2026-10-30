// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n, num = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; ++j)
            {
                printf("%d ", num);
                num++;
            }
        }
        else
        {
            int x = num + i - 1;
            for (int j = 1; j <= i; ++j)
            {
                printf("%d ", x);
                x--;
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}