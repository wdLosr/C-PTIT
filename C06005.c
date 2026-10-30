// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int check(char a[105][105], char s[105], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i], s) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char s[105];
    char a[105][105];
    int cnt[105] = {0};
    int n = 0;
    while (scanf("%s", s) != -1)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        int tmp = check(a, s, n);
        if (tmp == -1)
        {
            strcpy(a[n], s);
            cnt[n] = 1;
            n++;
        }
        else
            cnt[tmp]++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", a[i], cnt[i]);
    }
    return 0;
}