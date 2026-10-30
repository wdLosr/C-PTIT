// wdLosr - Le Loc
#include <stdio.h>
#include <math.h>
int prime[100001];

void snt()
{
    for (int i = 0; i <= 100000; ++i)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(100000); ++i)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int sum(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (s % 5 == 0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    snt();
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 5; i < n; ++i)
    {
        if (prime[i] && sum(i))
        {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n");
    printf("%d", cnt);
    return 0;
}