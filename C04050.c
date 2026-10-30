// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[105], b[105];
    int cnt_a[1005] = {0}, cnt_b[1005] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        cnt_a[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        cnt_b[b[i]]++;
    }
    for (int i = 1; i < 1000; ++i)
    {
        if (cnt_a[i] && cnt_b[i])
            printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i < 1000; ++i)
    {
        if (cnt_a[i] && cnt_b[i] == 0)
            printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i < 1000; ++i)
    {
        if (cnt_a[i] == 0 && cnt_b[i])
            printf("%d ", i);
    }
}