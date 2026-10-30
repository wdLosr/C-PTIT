// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    ll acc = a * b;
    return acc / gcd(a, b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[20];
        scanf("%s", s);
        int n = strlen(s);
        if (n % 2 != 0)
        {
            printf("INVALID\n");
        }
        else
        {
            ll a = 0, b = 0;
            for (int i = 0; i < n / 2; ++i)
            {
                a += (s[i] - '0') * pow(10, n / 2 - 1 - i);
            }
            for (int i = n / 2; i < n; ++i)
            {
                b += (s[i] - '0') * pow(10, n - i - 1);
            }
            printf("%lld\n", lcm(a, b));
        }
    }
    return 0;
}