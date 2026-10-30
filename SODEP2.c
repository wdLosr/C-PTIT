// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[505];
        scanf("%s", &s);
        int n = strlen(s), cnt = 0, sum = 0;
        for (int i = 0; i < n / 2; ++i)
        {
            if (s[n - i - 1] == s[i])
            {
                cnt++;
            }
        }
        if (cnt == n / 2 && s[0] == '8' && s[n - 1] == '8')
        {
            for (int i = 0; i < n; ++i)
            {
                sum += s[i] - '0';
            }
            if (sum % 10 == 0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}