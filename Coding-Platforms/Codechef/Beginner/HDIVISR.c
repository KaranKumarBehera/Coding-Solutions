#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=10;i>=1;i--)
    {
        if(n%i==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}