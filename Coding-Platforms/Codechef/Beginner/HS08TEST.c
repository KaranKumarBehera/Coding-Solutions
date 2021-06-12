#include <stdio.h>
int main()
{
    float y;
    int x;
    scanf("%d %f",&x,&y);
    printf("%.2f\n",(x%5==0 && y>=(float)x+.5 && x<=2000 && y<=2000)?((y-x)-.5):y);
    return 0;
}