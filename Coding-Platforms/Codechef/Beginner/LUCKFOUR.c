#include <stdio.h>
void fourCount(long unsigned int num)
{
    int k=0,d;
    while(num>0)
    {
        d=num%10;
        if(d==4)
            k++;
        num/=10;
    }
    printf("%d\n",k);
    k=0;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long unsigned int num;
        scanf("%lu",&num);
        fourCount(num);
    }
    return 0;
}
