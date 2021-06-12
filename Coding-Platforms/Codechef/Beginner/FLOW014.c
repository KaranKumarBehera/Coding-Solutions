#include <stdio.h>
int main(void)
{
    int t,HS,TS,grade=0;
    float CC;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%f%d",&HS,&CC,&TS);
        if(HS>50 && CC<0.7 && TS>5600)
            grade=10;
        else if(HS>50 && CC<0.7)
            grade=9;
        else if(CC<0.7 && TS>5600)
            grade=8;
        else if(HS>50 && TS>5600)
            grade=7;
        else if(HS>50 || CC<0.7 || TS>5600)
            grade=6;
        else
            grade=5;
        printf("%d\n",grade);
    }
    return 0;
}