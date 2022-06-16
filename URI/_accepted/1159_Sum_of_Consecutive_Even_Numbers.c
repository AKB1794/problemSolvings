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

    int n, sum;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        if (n % 2 != 0)
            n++;
        sum = 0;
        for (int i = 0; i < 5; i++, n += 2)
        {
            sum += n;
        }
        printf("%d\n", sum);
    }
    return 0;
}

/*
input 4, for example, the output must be 4+6+8+10+12 = 40
*/