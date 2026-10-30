// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int p1hang[1001] = {}, p1cot[1001] = {}, p2hang[1001] = {}, p2cot[1001] = {};
        char s[1002][1002];
        getchar();
        for (int i = 0; i < n; ++i)
        {
            gets(s[i]);
            for (int j = 0; j < m; ++j)
            {
                if (s[i][j] == '1')
                {
                    p1hang[i]++;
                    p1cot[j]++;
                }
                else if (s[i][j] == '2')
                {
                    p2cot[j]++;
                    p2hang[i]++;
                }
            }
        }
        ll kq = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (s[i][j] == '1')
                {
                    kq += p2hang[i] * p2cot[j];
                }
                else if (s[i][j] == '2')
                {
                    kq += p1hang[i] * p1cot[j];
                }
            }
        }
        printf("%lld\n", kq);
    }
}