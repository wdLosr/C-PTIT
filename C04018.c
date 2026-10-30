// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[31], cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i < n; ++i)
        {
            if (a[i - 1] == a[i])
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}