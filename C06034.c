// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int val[] = {1, 5, 10, 50, 100, 500, 1000};
char s[] = "IVXLCDM";
int find(char c)
{
    for (int i = 0; i < 7; ++i)
    {
        if (s[i] == c)
            return i;
    }
}
int convert(char c[])
{
    int n = strlen(c);
    int r = val[find(c[n - 1])];
    for (int i = n - 1; i > 0; --i)
    {
        int f1 = find(c[i]);
        int f2 = find(c[i - 1]);
        if (val[f1] <= val[f2])
        {
            r += val[f2];
        }
        else
            r -= val[f2];
    }
    return r;
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char c[16];
        scanf("%s", c);
        printf("%d\n", convert(c));
    }
    return 0;
}