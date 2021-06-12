#include <stdio.h>
void dgtextr(int n)
{
    int d,sum=0;
    while(n>0)
    {
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("%d\n",sum);
}
int main(void)
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        dgtextr(n);
    }
}