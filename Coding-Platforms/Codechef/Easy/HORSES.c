#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {return ( *(int*)a - *(int*)b );}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,minVal;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmpfunc);
        minVal=99999;
        for(int i=1;i<n-1;i++)
            if(minVal>a[i]-a[i-1])
                minVal=a[i]-a[i-1];
        printf("%d",minVal);
    }
    return 0;
}