// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *lwr(char *s)
{
    for (int i = 0; i < strlen(s); ++i)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
int main()
{
    char s[55];
    gets(s);
    lwr(s);
    char a[20][50];
    int n = 0;
    char *t = strtok(s, " ");
    while (t != NULL)
    {
        strcpy(a[n++], t);
        t = strtok(NULL, " ");
    }
    for (int i = 0; i < n - 1; ++i)
    {
        printf("%c", a[i][0]);
    }
    printf("%s@ptit.edu.vn", a[n - 1]);
    return 0;
}