#include <stdio.h>
int main()
{
    char ch, ch1;
    while(scanf("%c", &ch) == 1){
        if(ch != ch1){
            printf("%c", ch);
        }
        ch1 = ch;
    }
    return 0;
}
