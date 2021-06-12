#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int aandb=0;
    int aorb=0;
    int axorb=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i&j)>aandb && (i&j)<k)
                aandb=i&j;
            if((i|j)>aorb && (i|j)<k)
                aorb=i|j;
            if((i^j)>axorb && (i^j)<k)
                axorb=i^j;  
        }
    }
    printf("%d\n%d\n%d",aandb,aorb,axorb);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}