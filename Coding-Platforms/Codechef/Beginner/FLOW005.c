#include <stdio.h>
int main(void)
{
    int t,p,count=0,n=6,menu[6]={1,2,5,10,50,100};
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
        n=6;
    }
    return 0;
}