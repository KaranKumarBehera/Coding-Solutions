#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {return ( *(int*)a - *(int*)b );}
int main(void)
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        qsort(a, n, sizeof(int), cmpfunc);
        printf("%d/n",a[0]+a[1]);
    }
}
