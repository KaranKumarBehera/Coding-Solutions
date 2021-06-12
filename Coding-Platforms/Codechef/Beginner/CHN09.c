#include <stdio.h>
#define MAX 100
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char string[MAX];
        scanf("%s",string);
        int a=0,b=0,c;
        for(int i=0;string[i]!='\0';++i)
        {
            if(string[i]=='a')
                ++a;
            else if(string[i]=='b')
                ++b;
        }
        c=a<b?a:b;
        printf("%d\n",c); 
    }
    return 0;
}