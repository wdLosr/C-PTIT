// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n, ct=0;
    scanf("%d", &n);
    int a[101];
    int cnt[100001]={0};
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    for (int i = 0; i < n ; ++i)
    {
        if(cnt[a[i]] > 1)
        {
            ct++;
            cnt[a[i]] = 0;
        }
    }
    printf("%d\n", ct);
    for (int i = 0; i < n ; ++i)
    {
        if(cnt[a[i]] == 0)
        {
            printf("%d ", a[i]);
            cnt[a[i]] = -1;
        }
    }
    return 0;
}