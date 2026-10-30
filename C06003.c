// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[201];
        gets(s);
        int cnt = 0;
        char * m = strtok(s, " ");
        while (m != NULL)
        {
            cnt++;
            m = strtok(NULL, " ");
        }
        printf("%d\n", cnt);
    }
    return 0;
}