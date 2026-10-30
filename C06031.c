// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int n = strlen(s), max = 0;
    int f[n];
    for (int i = 0; i < n; i++)
    {
        f[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (s[i] > s[j] && f[i] <= f[j])
            {
                f[i] = f[j] + 1;
            }
        }
        if (max < f[i]) max = f[i];
    }
    printf("%d", 26 - max);
}