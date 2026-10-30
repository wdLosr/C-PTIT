// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define ll long long

void summin(char x1[], char x2[])
{
    int n1 = strlen(x1);
    int n2 = strlen(x2);
    for (int i = 0; i < n1; ++i)
    {
        if (x1[i] == '6')
        {
            x1[i] = '5';
        }
    }
    for (int i = 0; i < n2; ++i)
    {
        if (x2[i] == '6')
        {
            x2[i] = '5';
        }
    }
    ll X1 = atoll(x1);
    ll X2 = atoll(x2);
    printf("%lld ", X1 + X2);
}

void summax(char x1[], char x2[])
{
    int n1 = strlen(x1);
    int n2 = strlen(x2);
    for (int i = 0; i < n1; ++i)
    {
        if (x1[i] == '5')
        {
            x1[i] = '6';
        }
    }
    for (int i = 0; i < n2; ++i)
    {
        if (x2[i] == '5')
        {
            x2[i] = '6';
        }
    }
    ll X1 = atoll(x1);
    ll X2 = atoll(x2);
    printf("%lld", X1 + X2);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char x1[20], x2[20];
        scanf("%s %s", x1, x2);
        summin(x1, x2);
        summax(x1, x2);
        printf("\n");
    }
    return 0;
}