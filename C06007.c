// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cmp(char c[], char b[])
{
    int C = strlen(c);
    int B = strlen(b);
    if (C != B)
        return 0;
    else
    {
        if (strcmp(c, b) != 0)
            return 0;
        else
            return 1;
    }
}

int main()
{
    char c[101];
    gets(c);
    char b[101];
    scanf("%s", b);
    char *t = strtok(c, " ");
    while (t != NULL)
    {
        if (cmp(t, b) == 0)
        {
            printf("%s ", t);
        }
        t = strtok(NULL, " ");
    }
    return 0;
}