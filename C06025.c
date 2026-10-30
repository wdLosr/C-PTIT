// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

void subtract(char a[], char b[])
{
    int lena = strlen(a), lenb = strlen(b);
    int x[lena], y[lena], z[lena];
    for (int i = 0; i < lena; ++i)
    {
        x[i] = a[i] - '0';
    }
    int tmp = lena - lenb;
    for (int i = 0; i < tmp; ++i)
    {
        y[i] = 0;
    } 
    for (int i = tmp; i < lena; ++i)
    {
        y[i] = b[i - tmp] - '0';
    }
    int mem = 0;
    for (int i = lena - 1; i >= 0; --i)
    {
        x[i] -= mem;
        if (x[i] < y[i])
        {
            x[i] += 10;
            mem = 1;
        }
        else
        {
            mem = 0;
        }
        z[i] = x[i] - y[i];
    }
    int st = 0;
    while (st < lena - 1 && z[st] == 0)
    {
        st++;
    }
    for (int i = st; i < lena; ++i)
    {
        printf("%d", z[i]);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[1005], b[1005];
        scanf("%s %s", a, b);
        int lena = strlen(a), lenb = strlen(b);
        if (lena < lenb || (lena == lenb && strcmp(a, b) < 0))
        {
            subtract(b, a);
        }
        if(lena > lenb)
        {
            subtract(a, b);
        }
        printf("\n");
    }
    return 0;
}
