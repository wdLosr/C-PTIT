// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int tn(char x[])
{
    int n = strlen(x);
    for (int i = 0; i <= (n - 1) / 2; ++i)
    {
        if (x[i] != x[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 0, max = 0;
    char x[50], a[10005][50];
    while (scanf("%s", x) != -1)
    {
        if (tn(x))
        {
            int m = strlen(x);
            strcpy(a[n++], x);
            if (m > max)
            {
                max = m;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (strlen(a[i]) == max)
        {
            int cnt = 1;
            for (int j = i + 1; j < n; ++j)
            {
                if (!strcmp(a[i], a[j]))
                {
                    a[j][0] = 0;
                    cnt++;
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
    return 0;
}