#include <stdio.h>
int main(void)
{
    int w,a;
    scanf("%d",&w);
    if(w%2!=0 || w==2)
    {
        printf("NO");
    }
    else
    {
        a=w/2;
        if(a%2==0 || w==2)
            printf("YES");
        else
        {
            while(a>0)
            {
                a--;
                if(a%2==0)
                {
                    printf("YES");
                    break;
                }
            }
        }
    }
    return 0;
}