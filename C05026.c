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
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[35][35];
    int cnt[1005] = {0};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
            if (snt(a[i][j]))
            {
                cnt[i]++;
            }
        }
    }
    int mx = -1, k;
    for (int i = 0; i < n; ++i)
    {
        if (cnt[i] >= mx)
        {
            mx = cnt[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (cnt[i] == mx)
        {
            k = i + 1;
            break;
        }
    }
    printf("%d\n", k);
    for (int i = 0; i < n; ++i)
    {
        if (snt(a[k - 1][i]))
        {
            printf("%d ", a[k - 1][i]);
        }
    }
    return 0;
}