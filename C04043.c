// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, check = 0;
        scanf("%d", &n);
        ll a[5005];
        for (int i = 0; i < n; ++i)
        {
            scanf("%lld", &a[i]);
        }
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                ll tmp = sqrt(a[i] * a[i] + a[j] * a[j]);
                if (tmp == sqrt(a[i] * a[i] + a[j] * a[j]))
                {
                    for (int k = j + 1; k < n; ++k)
                    {
                        if (a[k] == tmp)
                        {
                            printf("YES\n");
                            check = 1;
                            break;
                        }
                    }
                }
                if (check)
                    break;
            }
            if (check)
                break;
        }
        if (check == 0)
            printf("NO\n");
    }
    return 0;
}