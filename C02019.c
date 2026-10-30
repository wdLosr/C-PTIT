// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 2; j < 2 * i + 1; ++j)
        {
            if (j % 2 == 0)
            {
                printf("%d", j);
            }
        }
        for (int j = 2 * i - 2; j >= 2; --j)
        {
            if (j % 2 == 0)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}