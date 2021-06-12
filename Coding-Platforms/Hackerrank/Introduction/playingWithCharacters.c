#include <stdio.h>
#define MAX_LEN 9999
int main(){
    char c;
    char s[MAX_LEN];
    char sen[MAX_LEN];
    scanf("%c",&c);
    printf("%c\n",c);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%s",sen);
    return 0;
}
