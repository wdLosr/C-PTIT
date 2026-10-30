// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

int main()
{
    int a[101];
    int cnt[100001]={0};
    int n, ct=0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; ++i)
    {
        if(cnt[a[i]]==1)
        {
            ct++;
        }
    }
    printf("%d\n", ct);
    for (int i = 0; i < n; ++i)
    {
        if(cnt[a[i]]==1)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}