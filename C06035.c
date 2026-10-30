// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[25];
        gets(s);
        int len = strlen(s);
        int cnt = 0;
        int l = 0, r = len - 1;
        while (l <= r)
        {
            if (l == r && cnt == 0)
            {
                cnt = 1;
            }
            if (s[l] != s[r])
            {
                cnt += 1;
            }
            l++;
            r--;
        }
        if (cnt == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}