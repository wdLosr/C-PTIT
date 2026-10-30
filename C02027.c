// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int col = 1;
    int stt = 96;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            int a = stt + 1;
            for (int j = 1; j <= col; j++)
            {
                printf("%c ", a);
                a++;
                stt++;
            }
        }
        if (i % 2 == 0)
        {
            int a = stt + i;
            for (int j = 1; j <= col; j++)
            {
                printf("%c ", a);
                a--;
                stt++;
            }
        }
        col++;
        printf("\n");
    }
    return 0;
}