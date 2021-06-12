#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int data[n],count=0,key;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&data[i]);
        if(i==k)
            key=data[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(data[i]>=key && data[i]>0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}