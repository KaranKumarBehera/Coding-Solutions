#include <stdio.h>
int main(void)
{
    int t,N,K;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&N,&K);
        int a[N];
        for(int i=0;i<N;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<N;i++)
        {
            if(K-a[i]>=0)
            {
                printf("1");
                K=K-a[i];
            }
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}