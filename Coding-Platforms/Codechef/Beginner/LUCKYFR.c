#include <stdio.h>
int noOfFours(long long int n)
{
    int d,count=0;
    while(n!=0)
    {
        d=n%10;
        if(d==4)
            count++;
        n/=10;
    }
    return count;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%d\n",noOfFours(n));
    }
}