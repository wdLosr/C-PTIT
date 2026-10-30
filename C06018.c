// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    for(int i=0; i<t; ++i)
    {
        char s1[205];
        gets(s1);
        char s2[205];
        gets(s2);
        char res1[20][50];
        int n1 = 0;
        char res2[20][50];
        int n2 = 0;

        char *token1 = strtok(s1, " ");
        while (token1 != NULL)
        {
            int check = 1;
            for (int i = 0; i < n1; i++)
            {
                if (strcmp(res1[i], token1) == 0)
                {
                    check = 0;
                    break;
                }
            }
            if (check)
                strcpy(res1[n1++], token1);
            token1 = strtok(NULL, " ");
        }

        for (int i = 0; i < n1 - 1; i++)
            for (int j = i + 1; j < n1; j++)
                if (strcmp(res1[i], res1[j]) > 0)
                {
                    char tmp[105] = {};
                    strcpy(tmp, res1[i]);
                    strcpy(res1[i], res1[j]);
                    strcpy(res1[j], tmp);
                }

        char *token2 = strtok(s2, " ");
        while (token2 != NULL)
        {
            int check = 1;
            for (int i = 0; i < n2; i++)
            {
                if (strcmp(res2[i], token2) == 0)
                {
                    check = 0;
                    break;
                }
            }
            if (check)
            {
                strcpy(res2[n2], token2);
                n2++;
            }
            token2 = strtok(NULL, " ");
        }

        for (int i = 0; i < n1; i++)
        {
            int check = 1;
            for (int j = 0; j < n2; j++)
            {
                if (strcmp(res1[i], res2[j]) == 0)
                {
                    check = 0;
                    break;
                }
            }
            if (check)
                printf("%s ", res1[i]);
        }
        printf("\n");
    }
    return 0;
}