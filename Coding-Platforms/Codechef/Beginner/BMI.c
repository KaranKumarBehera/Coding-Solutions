#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int H,M,C;
        scanf("%d %d",&M,&H);
        C=M/(H*H);
        if(C<=18)
            printf("%d\n",1);
        else if(C>18 && C<=24)
            printf("%d\n",2);
        else if(C>24 && C<=29)
            printf("%d\n",3);
        else
            printf("%d\n",4);
    }
    return 0;
}