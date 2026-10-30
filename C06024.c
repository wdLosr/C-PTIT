// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void sum(char a[], char b[])
{
    int lena = strlen(a);
    int lenb = strlen(b);
    int n = 0;
    int x[lena], y[lena], z[lena + 1];
    for (int i = 0; i < lena; i++)
    {
        x[i] = a[i] - '0';
    }
    for (int i = 0; i < lena - lenb; i++)
    {
        y[i] = 0;
    }
    for (int i = lena - lenb; i < lena; i++)
    {
        y[i] = b[i - lena + lenb] - '0';
    }
    int mem = 0;
    for (int i = lena - 1; i >= 0; i--)
    {
        int num = x[i] + y[i] + mem;
        z[n++] = num % 10;
        mem = num / 10;
    }
    if (mem)
    {
        z[n++] = mem;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", z[i]);
    }
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char a[1005], b[1005];
        scanf("%s%s", a, b);
        int lena = strlen(a);
        int lenb = strlen(b);
        if (lena > lenb)
            sum(a, b);
        else
            sum(b, a);
        printf("\n");
    }
    return 0;
}