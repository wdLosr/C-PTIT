// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[1005];
        scanf("%s", s);
        int even = 0, odd = 0;
        int check = 0;
        int cnt = 0;
        for (int i = 0; i < strlen(s); ++i)
        {
            if (s[0] == '0' || s[i] < '0' || s[i] > '9')
            {
                printf("INVALID\n");
                check = 1;
                break;
            }
            else
            {
                int x = s[i] - '0';
                if (x % 2 == 0)
                {
                    even++;
                }
                else
                    odd++;
            }
        }
        if (check == 0)
        {
            if (even > odd && strlen(s) % 2 == 0)
            {
                printf("YES\n");
            }
            else if (odd > even && strlen(s) % 2 != 0)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}