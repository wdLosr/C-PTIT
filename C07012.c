// wdLosr - Le Loc
#include <stdio.h>
#include <string.h>
struct hang
{
    int id;
    char name[100];
    char group[100];
    double mua;
    double ban;
    double loinhuan;
};
int cmp(struct hang a, struct hang b)
{
    if (a.loinhuan < b.loinhuan) return 1;
    return 0;
}
void swap(struct hang *a, struct hang *b)
{
    struct hang c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int n;
    scanf("%d", &n);
    struct hang a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("\n");
        a[i].id = i;
        gets(a[i].name);
        gets(a[i].group);
        scanf("%lf%lf", &a[i].mua, &a[i].ban);
        a[i].loinhuan = a[i].ban - a[i].mua;
    }
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (cmp(a[i], a[j]))
                swap(&a[i], &a[j]);
    for (int i = 1; i <= n; i++)
    {
        printf("%d %s %s %.2lf\n", a[i].id, a[i].name, a[i].group, a[i].loinhuan);
    }
}