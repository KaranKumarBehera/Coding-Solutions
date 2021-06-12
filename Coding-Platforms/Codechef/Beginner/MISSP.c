#include <stdio.h>
int main(void)
{
    int t,n,k,count=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&k);
            count^=k;
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}