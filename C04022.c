// wdLosr - Le Loc
#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{

    int n, mx = -1, mx1 = -1;
    scanf("%d", &n);
    int a[101];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        mx = max(a[i], mx);
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != mx)
        {
            mx1 = max(a[i], mx1);
        }
    }
    printf("%d %d", mx, mx1);
    return 0;
}