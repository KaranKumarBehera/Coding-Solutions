#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int x;
        int count=0;
        scanf("%lld",&x);
        if(x%5!=0)
            count=-1;
        else
        {
           while(x%10!=0)
           {
               x*=2;
               count++;
           }     
        }
        printf("%d\n",count);
    }
    return 0;
}