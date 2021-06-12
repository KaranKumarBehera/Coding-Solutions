#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1000
void characterCount(char s[],int n)
{
    int k[26]={0};
    bool flag=true;
    if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z' && i<n/2)
                ++k[s[i]-97];
            if(s[i]>='a' && s[i]<='z' && i>=n/2)
                --k[s[i]-97];
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z' && i<n/2)
                ++k[s[i]-97];
            if(s[i]>='a' && s[i]<='z' && i>n/2)
                --k[s[i]-97];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(k[i]!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[MAX];
        scanf("%s",s);
        int n=strlen(s);
        characterCount(s,n);
    }
    return 0;
}