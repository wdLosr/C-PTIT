// wdLosr - Le Loc
#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int main()
{
    int a[4][2];
    int mn_x = 100, mx_x = -100;
    int mn_y = 100, mx_y = -100;
    for (int i = 0; i < 4; ++i)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
        mn_x = min(mn_x, a[i][0]);
        mx_x = max(mx_x, a[i][0]);
        mn_y = min(mn_y, a[i][1]);
        mx_y = max(mx_y, a[i][1]);
    }
    int MAX = max(mx_x - mn_x, mx_y - mn_y);
    printf("%d", MAX * MAX);
    return 0;
}