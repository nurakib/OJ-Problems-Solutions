#include <stdio.h>
#include <string.h>
int main(){
    long long i, j, len, sum;
    char num[100];
    while(gets(num)){
        if(num[0] == '-')
            break;
        sum = 0;
        len = strlen(num);
        if(num[0] == '0' && num[1] == 'x'){
            for(i = len - 1, j = 1; i >= 2; i--, j = j * 16){
                if(num[i] >= 48 && num[i] <= 57)
                    sum = sum + (num[i] - 48) * j;
                else if(num[i] >= 65 && num[i] <= 70)
                    sum = sum + (num[i] - 55) * j;
            }
            printf("%d\n", sum);
        }
        else{
            for(i = len - 1, j = 1; i >= 0; i--, j = j * 10)
                sum = sum + (num[i] - '0') * j;
            printf("0x%X\n", sum);
        }
    }
    return 0;
}
