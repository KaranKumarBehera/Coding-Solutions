#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int N,B,M,Time=0;
        scanf("%lld%lld%lld",&N,&B,&M);
        while(N!=0)
        {
            if(N%2!=0)
            {
                Time+=((N+1)/2)*M;
                N/=2;
                if(N==0)
                    break;
            }
            else
            {
                Time+=((N/2)*M);
                N/=2;
                if(N==0)
                    break;
            }
            Time=Time+B;
            M=M*2;
        }
        printf("%lld\n",Time);
    }
    return 0;
}