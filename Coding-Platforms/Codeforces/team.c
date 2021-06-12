#include <stdio.h>
int main(void)
{
    int n,k=0,count=0;
    scanf("%d",&n);
    int a[n-1][2];
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
                k++;
        }
        if(k>=2)
            count++;
        k=0;
    }
    printf("%d\n",count);
    return 0;
}