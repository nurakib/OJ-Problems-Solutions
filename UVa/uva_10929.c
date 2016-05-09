#include <stdio.h>
#include <string.h>
int main(){
    int i, len, rem;
    char num[1000];
    while(gets(num)){
        rem = 0;
        len = strlen(num);
        if(len == 1  && num[0] == '0')
            break;
        for(i = 0; i < len; i++)
            rem = ((rem * 10) + (num[i] - '0')) % 11;
        if(rem == 0)
            printf("%s is a multiple of 11.\n", num);
        else
            printf("%s is not a multiple of 11.\n", num);
    }
    return 0;
}
