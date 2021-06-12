#include <stdio.h>
int noOfSquares(int base)
{
    int answer=0;
    while(base>2)
    {
        answer+=(base-2)/2;
        base-=2;
    }
    return answer;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int base;
        scanf("%d",&base);
        printf("%d\n",noOfSquares(base));
    }
    return 0;
}