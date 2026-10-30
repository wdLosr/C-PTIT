// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], sum = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%.3f", (float)sum / n);
    return 0;
}