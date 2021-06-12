#include <stdio.h>
#include <stdbool.h>
int sumcheck(int a,int b,int c)
{
    if(a+b==c)
        return true;
    else if(a+c==b)
        return true;
    else if(b+c==a)
        return true;
    else
        return false;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(sumcheck(a,b,c))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}