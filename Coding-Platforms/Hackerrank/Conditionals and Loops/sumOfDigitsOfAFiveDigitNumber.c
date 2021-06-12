#include <stdio.h>

int sumOfDigits(int n)
{
    int d=0;
    int sum=0;
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
int main() {
    int n,ans;
    scanf("%d",&n);
    ans=sumOfDigits(n);
    printf("%d",ans);
    return 0;
}
