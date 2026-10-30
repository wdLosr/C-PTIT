// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100005];
    gets(s);
    int n = strlen(s);
    printf("%d", n - 1);
    return 0;
}