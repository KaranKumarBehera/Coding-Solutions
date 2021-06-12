#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n)
{
    if(n<=1) return false;

    if(n<=3) return true;

    if(n%2==0 || n%3==0) return false;
    
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0 || n%(i+2)==0)
            return false;

    return true;
}
int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int x,y,z,sum,k=0;
        scanf("%d%d",&x,&y);
        sum=x+y;
        do
        {
            sum++;
            k++;
        }
        while(isPrime(sum)==false);
        printf("%d\n",k);
    }
    return 0;
}