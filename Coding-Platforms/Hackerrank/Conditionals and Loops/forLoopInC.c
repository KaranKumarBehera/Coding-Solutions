#include <stdio.h>

void check(int n) {
    if(n==1)
        printf("one\n");
    else if(n==2)
        printf("two\n");
    else if(n==3)
        printf("three\n");
    else if(n==4)
        printf("four\n");
    else if(n==5)
        printf("five\n");
    else if(n==6)
        printf("six\n");
    else if(n==7)
        printf("seven\n");
    else if(n==8)
        printf("eight\n");
    else 
        printf("nine\n");
}
void rangeCheck(int a, int b){
    for(int i=a;i<=b;i++){
        if(i<=9)
            check(i);
        else if(i>9 && i%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
}
int main() {
    int a,b;
    scanf("%d\n%d",&a,&b);
    rangeCheck(a,b);
    return 0;
}
