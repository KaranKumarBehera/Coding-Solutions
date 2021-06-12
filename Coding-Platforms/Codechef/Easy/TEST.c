#include <stdio.h>
int main(void)
{
    int n,ch;
    scanf("%d",&n);
    while(n!=42)
    {
        printf("%d\n",n);
        scanf("%d",&n);
        if(n==42)
            break;
    }
    return 0;
}