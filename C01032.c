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
        int n;
        ll acc = 1;
        scanf("%d", &n);
        for (int i = 2; i <= sqrt(n); ++i)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            if (cnt != 0)
            {
                acc *= (long long)i;
            }
        }
        if (n > 1) acc = acc * (long long)n;
        printf("%lld\n", acc);
    }
    return 0;
}