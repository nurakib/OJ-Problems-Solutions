#include <stdio.h>
#include <string.h>
int degree(int n);
int main(){
    int i, len, sum, cnt;
    char str[1000];
    while(gets(str)){
        sum = 0; cnt = 1;
        len = strlen(str);
        if(str[0] == '0' && len == 1)
            break;
        for(i = 0; i < len; i++)
            sum = sum + (str[i] - '0');
        while(sum >= 10){
            sum = degree(sum);
            cnt++;
        }
        if(sum % 9 == 0)
            printf("%s is a multiple of 9 and has 9-degree %d.\n", str, cnt);
        else
            printf("%s is not a multiple of 9.\n", str);
    }
    return 0;
}
int degree(int n){
    int t = 0;
    while(n != 0){
        t = t + n % 10;
        n = n / 10;
    }
    return t;
}
