#include <stdio.h>
#define MAX 1000000
void fandl(long unsigned int num)
{
    int d,k=0;
    long unsigned int a[MAX];
    while(num>0)
    {
        d=num%10;
        a[k++]=d;
        num/=10;
    }
    printf("%lu\n",a[0]+a[k-1]);
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long unsigned int num;
        scanf("%lu",&num);
        fandl(num);
    }
    return 0;
}
