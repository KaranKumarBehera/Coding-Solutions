#include <stdio.h>
int main()
{
    int x=0,t;
    scanf("%d",&t);
    while(t--)
    {
        char instruction[3];
        scanf("%s",&instruction);
        if(instruction[0]=='+' || instruction[2]=='+')
            x++;
        else if(instruction[0]=='-'|| instruction[2]=='-')
            x--;
    }
    printf("%d",x);
    return 0;
}