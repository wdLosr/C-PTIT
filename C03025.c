// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>

int snt(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int check(int n)
{
    int sum = 0, cnt = 0, cnt1 = 0;
    while (n > 0)
    {
        cnt++;
        int t = n % 10;
        if (snt(t))
        {
            cnt1++;
            sum += t;
        }
        n /= 10;
    }
    if (cnt1 == cnt && snt(sum))
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, cnt = 0;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; ++i)
        {
            if (snt(i))
            {
                if(check(i))
                {
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}