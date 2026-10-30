// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    gets(s);
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < strlen(s); ++i)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            cnt1++;
        else if (s[i] >= '0' && s[i] <= '9')
            cnt2++;
        else
            cnt3++;
    }
    printf("%d %d %d", cnt1, cnt2, cnt3);
    return 0;
}