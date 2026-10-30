// wdLosr - Le Loc
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[105];
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int k=0, K=0, tm=0, N=n;
    while (n--)
    {
        for(int i=1; i<N; ++i)
        {
            if(a[i-1] > a[i])
            {
                int tmp = a[i-1];
                a[i-1] = a[i];
                a[i]=tmp;
                k++;
            }
        }
        if(k == tm) break;
        K++;
        printf("Buoc %d: ", K);
        for(int j=0; j<N; ++j)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
        tm = k;
    }
    return 0;
}