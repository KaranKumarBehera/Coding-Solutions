#include <stdio.h>
void count_freq(char* str, int freq[10])
{
    int i = 0;
    while(str[i])  
    {
        if (str[i] >= '0' && str[i] <= '9') 
        {
            ++freq[str[i]-'0'];  
        }
        ++i;
    }
}
int main(void) {
    int freq[10] = {0};             
    char str[1000];                 
    scanf("%s",&str);
    count_freq(str, freq);          

    for (int i=0; i < 10; ++i)      
    {
        printf("%d ",freq[i]);
    }
    return 0;
}