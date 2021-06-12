#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[10];
        for(int i=0;i<10;i++)
            scanf("%d",&arr[i]);
        int k;
        scanf("%d",&k);
        for(int i=9;i>=0;i--)
        {
            if(k-arr[i]>=0 && arr[i]!=0)
            {
                arr[i]=0;
                k=k-arr[i];
            }
        }
        for(int i=0;i<10;i++)
            printf("%d ",arr[i]);
        printf("\n");
        for(int i=9;i>=0;i--)
        {
            if(arr[i]>0)
            {
                printf("%d\n",i-1);
                break;
            }
        }
    }
    return 0;
}