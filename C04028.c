// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[105];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        printf("Buoc %d: ", i);
        for (int j = 0; j <= i; ++j)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        for (int k = 0; k <= i; ++k)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
    return 0;
}