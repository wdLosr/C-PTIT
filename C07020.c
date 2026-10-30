// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char kq[105], s[105];
    int mx = 0, k, m, tmp, sum = 0;
    while (n--)
    {
        tmp = 0;
        scanf("%s%d%d", s, &k, &m);
        while (m / k > 0)
        {
            int t = m / k;
            tmp += t;
            m = m - t * k + t * 2;
        }
        if (tmp > mx)
        {
            strcpy(kq, s);
            mx = tmp;
        }
        sum += tmp;
    }
    printf("%d\n%s", sum, kq);
}