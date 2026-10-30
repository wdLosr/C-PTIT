// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char c[15];
        gets(c);
        int n = strlen(c), tc1 = 0, tc2 = 0, tc3 = 0, tc4 = 0;
        // TH1
        if (c[6] - '0' < c[7] - '0' && c[7] - '0' < c[8] - '0' && c[8] - '0' < c[10] - '0' && c[10] - '0' < c[11] - '0')
        {
            tc1 = 1;
        }
        // TH2
        if (c[6] - '0' == c[7] - '0' && c[7] - '0' == c[8] - '0' && c[8] - '0' == c[10] - '0' && c[10] - '0' == c[11] - '0')
        {
            tc2 = 1;
        }
        // TH3
        if (c[6] - '0' == c[7] - '0' && c[7] - '0' == c[8] - '0' && c[8] - '0' != c[10] - '0' && c[10] - '0' == c[11] - '0')
        {
            tc3 = 1;
        }
        for (int i = 6; i < n; ++i)
        {
            if (c[i] - '0' == 6 || c[i] - '0' == 8)
            {
                tc4++;
            }
        }
        if (tc1 == 1 || tc2 == 1 || tc3 == 1 || tc4 == 5)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}