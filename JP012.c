// wdLosr - Le Loc
#include <stdio.h>
#define ll long long

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll f[100] = {0};
        int a, b;
        scanf("%d%d", &a, &b);
        f[1] = 1, f[0] = 0;
        for (int i = 2; i <= 92; ++i)
        {
            f[i] = f[i - 1] + f[i - 2];
        }
        for (int i = a; i <= b; ++i)
        {
            printf("%lld ", f[i]);
        }
        printf("\n");
    }
    return 0;
}