#include <stdio.h>
long int gcd(long int a,long int b){return b==0?a:gcd(b,a%b);}
long int lcm(long int a,long int b){return ((a*b)/gcd(a,b));}
int main(void)
{
    long int t,a,b;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%ld",&a,&b);
        printf("%ld %ld\n",gcd(a,b),lcm(a,b));
    }
}
