// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; ++i)
    {
        for (int j = 0; j < 2 * n - 1; ++j)
        {
            int mini1 = i;
            int minj1 = j;
            int mini2 = 2 * n - 1 - i - 1;
            int minj2 = 2 * n - 1 - j - 1;
            if (minj1 > minj2) minj1 = minj2;
            if (mini1 > mini2) mini1 = mini2;
            if (mini1 > minj1) mini1 = minj1;
            int N = n - mini1;
            printf("%d", N);
        }
        printf("\n");
    }
    return 0;
}