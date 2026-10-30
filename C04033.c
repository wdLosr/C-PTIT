// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n;
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
        if(cnt[a[i]] != 0)
        {
            printf("%d ", a[i]);
            cnt[a[i]]=0;
        }
    }
    return 0;
}