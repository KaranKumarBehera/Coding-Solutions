#include <stdio.h>
int add(int x,int y)
{
    if(y==0)
        return x;
    else
        return add(x^y,(x&y)<<1);
}
int main(void)
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",add(a,b));
    }
}