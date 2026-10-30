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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[1005], cnt[1005] = {0};
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        int tmp;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i] > a[j])
                {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            cnt[a[i]]++;
        }
        for (int i = 0; i < n; ++i)
        {
            if (snt(a[i]) && cnt[a[i]] >= 1)
            {
                printf("%d ", a[i]);
                cnt[a[i]] = 0;
            }
        }
        printf("\n");
    }
    return 0;
}