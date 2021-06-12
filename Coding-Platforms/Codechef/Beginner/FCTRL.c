#include <stdio.h>
int divByFive(long long int n)
{
    int k=0;
    if(n<5)
        return 0;
    else
    {
        while(n!=0)
        {
            k+=n/5;
            n/=5;
        }
        return k;
    }
}
int main(void)
{
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%d\n",divByFive(n));
    }
    return 0;
}