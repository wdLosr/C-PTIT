// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int t, T=1;
    scanf("%d", &t);
    while (t--)
    {
        int a[101];
        int cnt[100001] = {0};
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            cnt[a[i]]++;
        }
        printf("Test %d:\n", T);
        for (int i = 0; i < n; ++i)
        {
            if (cnt[a[i]] != 0)
            {
                printf("%d xuat hien %d lan", a[i], cnt[a[i]]);
                printf("\n");
                cnt[a[i]] = 0;
            }
        }
        T++;
        printf("\n");
    }
    return 0;
}