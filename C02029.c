// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n, num = 65;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        int x = num;
        for (int j = 1; j <= i; ++j)
        {
            printf("%c ", x);
            x += n - j;
        }
        printf("\n");
        num++;
    }
    return 0;
}