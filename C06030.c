// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

struct tu
{
    char nd[30];
    int cnt;
} ds[1000];
int n = 0;

int tim(char s[])
{
    for (int i = 0; i < n; ++i)
    {
        if (strcmp(ds[i].nd, s) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char s[30];
    while (scanf("%s", &s) != -1)
    {
        int i = tim(s);
        if (i == -1)
        {
            strcpy(ds[n].nd, s);
            ds[n].cnt = 1;
            n++;
        }
        else
            ds[i].cnt++;
    }
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        if (mx <= strlen(ds[i].nd))
        {
            mx = strlen(ds[i].nd);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (strlen(ds[i].nd) == mx)
        {
            printf("%s %d  %d\n", ds[i].nd, mx, ds[i].cnt);
        }
    }
    return 0;
}