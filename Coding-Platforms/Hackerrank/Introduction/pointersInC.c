#include <stdio.h>

void update(int *a,int *b) {
    int pc;
    int *c=&pc;
    (*c)=*a+*b;
    if(*a-*b<0)
            (*b)=(*a-*b)*-1;
    else
            (*b)=*a-*b;
    (*a)=(*c);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
