#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    char c;
    scanf("%d",&c);
    if(n==1)
        printf("%d",0);
    else
    {
        printf("%d",arr[0]+arr[n-1]);
    }
}