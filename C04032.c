// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int a[], int b[], int x)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = i + 1; j < x; ++j)
        {
            if (b[j] > b[i])
            {
                swap(&a[i], &a[j]);
                swap(&b[i], &b[j]);
            }
        }
    }
}

int find(int a[], int x, int n)
{
    for (int i = 0; i < x; ++i)
    {
        if (a[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int notdwn(int n)
{
    int tmp = n % 10, cnt = 1, cnt1 = 1;
    n /= 10;
    while (n != 0)
    {
        cnt++;
        if (tmp >= n % 10)
        {
            cnt1++;
            tmp = n % 10;
        }
        n /= 10;
    }
    if (cnt == cnt1)
        return 1;
    else
        return 0;
}

int main()
{
    int a[100000], b[100000] = {0}, n, x = 0;
    while (scanf("%d", &n) != -1)
    {
        if (notdwn(n))
        {
            int tmp = find(a, x, n);
            if (tmp == -1)
            {
                a[x] = n;
                b[x] = 1;
                x++;
            }
            else
                b[tmp]++;
        }
    }
    sort(a, b, x);
    for (int i = 0; i < x; ++i)
    {
        printf("%d %d\n", a[i], b[i]);
    }
    return 0;
}