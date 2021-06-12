#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int arr[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        if(n==1)
        {
            printf("%d\n",1);
        }
        else
        {
            long long int k=arr[0];
            int count=1;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<k)
                {
                    k=arr[i];
                    count++;
                }
            }
            printf("%d\n",count); 
        }               
    }
    return 0;
}