#include <stdio.h>
#define MAX 100
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void reverse(int arr[],int n)
{
    int i=0,temp;
    while(i<n/2)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
        i++;
    }
    display(arr,n);
}
void input()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    reverse(arr,n);
}
int main(void)
{
    input();
    return 0;
}