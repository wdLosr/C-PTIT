// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Data
{
    char str[50];
    double num;
} Data;

int cmp(const void *a, const void *b)
{
    double num1 = ((Data *)a)->num;
    double num2 = ((Data *)b)->num;
    return (num1 > num2) - (num1 < num2);
}

void print(Data *a, int n)
{
    for (int i = 0; i < n; ++i)
        printf("%s ", a[i].str);
    printf("\n");
    for (int i = 0; i < n; ++i)
        printf("%.3lf ", a[i].num);
    printf("\n");
}

void solve(Data *a, int n)
{
    int ok = 1;
    while (n)
    {
        if (!ok)
        {
            qsort(a, n, sizeof(Data), cmp);
            print(a, n);
            ok = 1;
        }

        strcat(a[0].str, a[1].str);
        a[0].num += a[1].num;

        for (int i = 1; i < n - 1; ++i)
            a[i] = a[i + 1];
        --n;

        for (int i = 1; i < n; ++i)
        {
            if (a[i].num < a[i - 1].num)
            {
                ok = 0;
                break;
            }
        }
        print(a, n);
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        Data a[n];

        for (int i = 0; i < n; ++i)
            scanf("%s", a[i].str);
        for (int i = 0; i < n; ++i)
            scanf("%lf", &a[i].num);

        qsort(a, n, sizeof(Data), cmp);
        print(a, n);
        solve(a, n);
        printf("\n");
    }

    return 0;
}
