#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int N,K,count=0;
        scanf("%d%d",&N,&K);
        int A[100];
        for(int i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
            if((A[i]+K)%7==0)
                count++;
        }
        printf("%d",count);
    }
    return 0;
}