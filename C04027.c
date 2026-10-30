// wdLosr - Le Loc
#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[105];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; ++i)
    {
        printf("Buoc %d: ", i + 1);
        int min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(&a[i], &a[min]);
        for (int k = 0; k < n; ++k)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
    return 0;
}