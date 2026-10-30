// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    char s[11];
    scanf("%s", s);
    int cnt[10] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; ++i)
    {
        int x = s[i] - '0';
        if (x == 2 || x == 3 || x == 5 || x == 7)
        {
            cnt[x]++;
        }
    }
    for (int i = 2; i <= 7; ++i)
    {
        if (cnt[i] > 0)
        {
            printf("%d %d\n", i, cnt[i]);
            cnt[i] = 0;
        }
    }
    return 0;
}