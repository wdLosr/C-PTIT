// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, cnt = 0;
        scanf("%d", &n);
        int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        for (int i = 9; i >= 0; --i)
        {
            int tmp = n / a[i];
            if (tmp != 0)
            {
                cnt += tmp;
                n = n - tmp * a[i];
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}