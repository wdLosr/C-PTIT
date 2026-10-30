// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
        char s[505];
        scanf("%s", &s);
        int n = strlen(s), cnt = 0, cnt1 = 0;
        for (int i = 0; i < n / 2; ++i)
        {
            if (s[n - i - 1] == s[i])
            {
                cnt++;
            }
        }
        if (cnt == n / 2)
        {
            for (int i = 0; i < n; ++i)
            {
                if (snt(s[i] - '0'))
                {
                    cnt1++;
                }
            }
            if (cnt1 == n)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}