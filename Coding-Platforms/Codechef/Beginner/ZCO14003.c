#include <stdio.h>
#include <stdlib.h>
void max(long long int a[],long long int n)
{
    long long int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("%lld",max);
}
void fixedPrice(long long int a[],long long int n)
{
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i]*(n-i);
    }
    max(arr,n);
}
int cmpfunc (const void * a, const void * b) {return ( *(long long int*)a - *(long long int*)b );}
int main(void)
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    qsort(a,n,sizeof(long long int),cmpfunc);
    fixedPrice(a,n);
    return 0;
}