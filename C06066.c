// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sum_big(char *num1, char *num2, char *kq)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int rm = 0;
    int i = len1 - 1, j = len2 - 1, k = 0;

    while (i >= 0 || j >= 0 || rm)
    {
        int d1 = (i >= 0) ? num1[i--] - '0' : 0;
        int d2 = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = d1 + d2 + rm;
        rm = sum / 10;
        kq[k++] = (sum % 10) + '0';
    }

    for (int l = 0; l < k / 2; ++l)
    {
        char tmp = kq[l];
        kq[l] = kq[k - 1 - l];
        kq[k - 1 - l] = tmp;
    }
    kq[k] = '\0';
}

void solve(char *n)
{
    char tmp[201];
    strcpy(tmp, n);
    while (strlen(tmp) > 1)
    {
        int length = strlen(tmp);
        int half = length / 2;
        char fi[201], se[201];
        strncpy(fi, tmp, half);
        fi[half] = '\0';
        strcpy(se, tmp + half);

        char sum[201];
        sum_big(fi, se, sum);
        printf("%s\n", sum);
        strcpy(tmp, sum);
    }
}

int main()
{
    char n[201];
    scanf("%s", n);
    solve(n);
    return 0;
}