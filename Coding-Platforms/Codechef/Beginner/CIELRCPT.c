#include <stdio.h>
int main(void)
{
    int t,p,count=0,n=12,menu[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&p);
        while(p>0)
        {
            if(p-menu[n-1]>=0)
            {
                p=p-menu[n-1];
                count++;
            }
            else
            {
                n--;
            }
        }
        printf("%d\n",count);
        count=0;
        n=12;
    }
    return 0;
}