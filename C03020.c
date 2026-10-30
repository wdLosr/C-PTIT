// wdLosr - Le Loc
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sd(int n)
{
    int m = 0, tmp = n, cnt = 0, sum = 0;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        sum += n % 10;
        if (n % 10 == 6)
        {
            cnt++;
        }
        n /= 10;
    }
    int end = sum % 10;
    if (m == tmp && cnt >= 1 && end == 8)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a, b, cnt1 = 0;
    scanf("%d%d", &a, &b);
    if (a > b)
        swap(&a, &b);
    for (int i = a; i <= b; ++i)
    {
        if (sd(i))
            printf("%d ", i);
    }
    return 0;
}