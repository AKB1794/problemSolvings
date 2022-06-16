#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)

int main()
{
    // freopen("/tmp/_inputs_","r",stdin);
    // freopen("/tmp/_outputs_","w",stdout);

    double sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += (1.0 / i);
    }
    printf("%.2lf\n", sum);

    return 0;
}