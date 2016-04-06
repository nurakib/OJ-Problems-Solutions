#include <stdio.h>
#include <string.h>
int main(){
    int i, len, check, value, res;
    char line[1000];
    while(gets(line)){
        len = strlen(line);
        if(line[0] >= 48 && line[0] <= 57){
            value = 0;
            for(i = len - 1; i >= 0; i--){
                check = line[i] - '0';
                value = value * 10 + check;
                if(value >= 32){
                    printf("%c", value);
                    value = 0;
                }
            }
            printf("\n");
        }
        else{
            for(i = len - 1; i >= 0; i--){
                value = (int) line[i];
                while(value != 0){
                    res = value % 10;
                    printf("%d", res);
                    value = value / 10;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
