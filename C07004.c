// wdLosr - Le Loc
#include <stdio.h>
struct phanso
{
    long long tu, mau;
};
long long ucln(long long a, long long b)
{
    if (b == 0)
        return a;
    return ucln(b, a % b);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i)
    {
        struct phanso ps1, ps2;
        scanf("%lld%lld", &ps1.tu, &ps1.mau);
        scanf("%lld%lld", &ps2.tu, &ps2.mau);
        long long tu1 = ps1.tu * ps2.mau;
        long long mau = ps1.mau * ps2.mau;
        long long tu2 = ps2.tu * ps1.mau;
        long long tmp = ucln(tu1 + tu2, mau);
        long long tmp1 = ucln(tu1, tu2);
        printf("Case #%d:\n", i);
        printf("%lld/%lld %lld/%lld\n", tu1 / tmp, mau / tmp, tu2 / tmp, mau / tmp);
        printf("%lld/%lld\n", (tu1 + tu2) / tmp, (mau) / tmp);
        printf("%lld/%lld\n", tu1 / tmp1, tu2 / tmp1);
    }
    return 0;
}