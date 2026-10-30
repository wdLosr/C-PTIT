// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[205], dc = 0, dl = 0;
        int m = 0;
        while (scanf("%d", &a[m]) != -1)
        {
            m++;
            if (getchar() == '\n')
                break;
        }
        for (int i = 0; i < m; ++i)
        {
            if (a[i] % 2 == 0)
                dc++;
            else
                dl++;
        }
        if (m % 2 == 0 && dc > dl)
            printf("YES\n");
        else if (m % 2 != 0 && dc < dl)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}