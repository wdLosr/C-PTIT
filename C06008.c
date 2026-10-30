// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[105];
    gets(a);
    char c[100][100];
    int n = 0;
    char *t = strtok(a, " ");
    while (t != NULL)
    {
        strcpy(c[n++], t);
        t = strtok(NULL, " ");
    }
    int check[105] = {0};
    for (int i = 0; i < n; i++)
    {
        if (check[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(c[i], c[j]) == 0)
                {
                    check[j] = 1;
                }
            }
            printf("%s ", c[i]);
        }
    }
    return 0;
}