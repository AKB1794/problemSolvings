#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.1416
#define rep(i,n) for (int i = 0; i < n; ++i) 
#define REP(i,k,n) for (int i = k; i <= n; ++i) 
#define REPR(i,k,n) for (int i = k; i >= n; --i)

int main()
{
    /* freopen("input","r",stdin); */
    /* freopen("output","w",stdout); */
    int a,i=0;
    scanf("%d",&a);
    while(i<6){
        if(a%2){
            printf("%d\n",a);
            ++i;
        }
        ++a;
    }

    return 0;
}
