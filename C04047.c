// wdLosr - Le Loc
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int T;
    int D;
} Guest;

int cmp(const void *a, const void *b)
{
    Guest *guestA = (Guest *)a;
    Guest *guestB = (Guest *)b;
    return guestA->T - guestB->T;
}

int main()
{
    int n;
    scanf("%d", &n);
    Guest guests[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &guests[i].T, &guests[i].D);
    }
    qsort(guests, n, sizeof(Guest), cmp);
    int kq = 0;
    for (int i = 0; i < n; ++i)
    {
        if (kq < guests[i].T)
        {
            kq = guests[i].T;
        }
        kq += guests[i].D;
    }
    printf("%d\n", kq);
    return 0;
}