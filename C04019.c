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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, mx = -1;
        scanf("%d", &n);
        int a[105], cnt[30005] = {0};
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            cnt[a[i]]++;
            mx = max(mx, cnt[a[i]]);
        }
        for (int i = 0; i < n; ++i)
        {
            if (cnt[a[i]] == mx)
            {
                printf("%d ", a[i]);
                cnt[a[i]] = 0;
            }
        }
        printf("\n");
    }
    return 0;
}