// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[1001];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n - 1; ++i)
        {
            int cnt = 0;
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i] > a[j])
                {
                    cnt++;
                }
                else
                    break;
            }
            if (cnt == n - i - 1)
            {
                printf("%d ", a[i]);
            }
        }
        printf("%d", a[n-1]);
        printf("\n");
    }
    return 0;
}