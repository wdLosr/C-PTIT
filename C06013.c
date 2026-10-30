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
        int d = 0;
        int check = 0;
        int dd[10] = {0};
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
                dd[x]++;
            }
        }
        if (check == 0)
        {
            for (int i = 0; i < strlen(s); ++i)
            {

                int x = s[i] - '0';
                if (dd[x] > 0)
                {
                    d++;
                    dd[x] = 0;
                }
            }
            if (d == 10)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}