// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

int snt(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t, T = 1;
    scanf("%d", &t);
    while (t--)
    {
        int a[101];
        int cnt[10001] = {0};
        int n, max = -1;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            if (snt(a[i]))
            {
                cnt[a[i]]++;
            }
            if (a[i] > max)
                max = a[i];
        }
        printf("Test %d:\n", T);
        for (int i = 2; i <= max; ++i)
        {
            if (cnt[i] != 0)
            {
                printf("%d xuat hien %d lan", i, cnt[i]);
                printf("\n");
                cnt[i] = 0;
            }
        }
        T++;
        printf("\n");
    }
    return 0;
}