#include <stdio.h>
#include <string.h>
#define MAX 100
int longWord(char c[],int n)
{
    printf("%c%d%c\n",c[0],n-2,c[n-1]);
}
int main(void)
{
    int t;
    char c[MAX];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&c);
        int n=strlen(c);
        if(n<=10)
            printf("%s\n",c);
        else
            longWord(c,n);
    }
    return 0;
}