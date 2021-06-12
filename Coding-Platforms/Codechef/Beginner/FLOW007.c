#include <stdio.h>
void reverse(long unsigned int n)
{
    int d,num=0;
    while(n>0)
    {
        d=n%10;
        num=(num*10)+d;
        n/=10;
    }
    printf("%d\n",num);
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long unsigned int n;
        scanf("%lu",&n);
        reverse(n);
    }
    return 0;
}
