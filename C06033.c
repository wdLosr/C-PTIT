// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

void tron(char s1[], char s2[], char s12[], int n)
{
    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        s12[j++] = s2[i];
        s12[j++] = s1[i];
    }
    s12[j] = '\0';
}

void tach(char s1[], char s2[], char s12[], int n)
{
    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        s1[i] = s12[j++];
    }
    for (int i = 0; i < n; ++i)
    {
        s2[i] = s12[j++];
    }
}

int solve(int n)
{

    char s1[n + 5], s2[n + 5], s12[2 * n + 5], tmp[2 * n + 5], t1[n + 5], t2[n + 5];
    scanf("%s%s%s", s1, s2, s12);
    strcpy(t1, s1);
    strcpy(t2, s2);
    int cnt = 0;
    while (1)
    {
        ++cnt;
        tron(s1, s2, tmp, n);
        if (strcmp(s12, tmp) == 0)
            return cnt;
        tach(s1, s2, tmp, n);
        if (!strcmp(t1, s1) && !strcmp(t2, s2))
            break;
    }
    return -1;
}

int main()
{
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (!n)
            break;
        printf("%d\n", solve(n));
    }
}