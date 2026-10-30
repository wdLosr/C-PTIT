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
        int a[51];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        int cnt = 0, k = n;
        while (k--)
        {
            int cnt1 = 0;
            for (int i = k-1; i >= 0; --i)
            {
                if (a[k] > a[i])
                {
                    cnt1++;
                }
                else break;
            }
            if (cnt1 == k) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}