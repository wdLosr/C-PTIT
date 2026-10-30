// wdLosr - Le Loc
#include <stdio.h>

int min(int a, int b)
{
    if(a>b) return b;
    else return a;
}
int main()
{
    int a[101];
    int n, mn1=1e9-1, mn2=1e9-1;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        mn1 = min(a[i], mn1);
    }
    for (int i = 0; i < n; ++i)
    {
        if(a[i] != mn1)
        {
            mn2 = min(a[i], mn2);
        }
    }
    printf("%d %d", mn1, mn2);
    return 0;
}