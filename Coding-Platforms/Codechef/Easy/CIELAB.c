#include <stdio.h>
int main(void)
{
    long int A,B,C,Cd;
    scanf("%ld%ld",&A,&B);
    C=A>B?A-B:B-A;
    if(C%10==9)
        printf("%ld",--C);
    else
        printf("%ld",++C);
    return 0;
}