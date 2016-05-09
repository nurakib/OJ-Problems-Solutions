#include <stdio.h>
#include <string.h>
int main(){
    int i, len, val, check;
    char word[1000];
    while(gets(word)){
        val = check = 0;
        len = strlen(word);
        for(i = 0; i < len; i++){
            if(word[i] >= 65 && word[i] <= 90)
                val = val + 26 + (word[i] - 64);
            else if(word[i] >= 97 && word[i] <= 122)
                val = val + (word[i] - 96);
        }
        for(i = 2; i * i <= val; i++){
            if(val % i == 0){
                check = 1;
                break;
            }
        }
        if(check)
            printf("It is not a prime word.\n");
        else
            printf("It is a prime word.\n");
    }
    return 0;
}
