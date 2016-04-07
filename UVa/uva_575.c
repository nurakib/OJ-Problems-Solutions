#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int i, j, len, digit, result;
    char n[100];
    while(gets(n)){
        result = 0;
        len = strlen(n);
        if(n[0] == '0' && len == 1)
            break;
        for(i = 0, j = len; i < len; i++, j--){
            digit = (int) (n[i] - '0');
            result = result + digit * (pow(2, j) - 1);
        }
        printf("%d\n", result);
    }
    return 0;
}
