#include <stdio.h>
int main(void)
{
    long long int n,k,t,count=0;
    scanf("%lld%lld",&n,&k);
    while(n--)
    {
        scanf("%lld",&t);
        if(t%k==0)
            count++;
    }
    printf("%lld",count);
}