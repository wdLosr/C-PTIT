// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    char c[100005];
    scanf("%s", c);
    int pos = 0, n = strlen(c);
    while (pos < n)
    {
        char tmp = c[pos];
        int last = pos;
        for (int i = pos; i < n; ++i)
        {
            if (c[i] > tmp)
            {
                tmp = c[i];
            }
        }
        for (int i = pos; i < n; ++i)
        {
            if (c[i] == tmp)
            {
                printf("%c", c[i]);
                last = i;
            }
        }
        pos = last + 1;
    }
    return 0;
}