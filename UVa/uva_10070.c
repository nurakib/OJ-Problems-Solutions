#include <stdio.h>
#include <string.h>
int main(){
    char number[1000];
    int mod4, mod100, mod400, mod15, mod55, i, len_num, leap, flag, count = 0;
    while(scanf("%s", &number) == 1){
        leap = flag = mod4 = mod15 = mod55 = mod100 = mod400 = 0;
        if(count > 0)
            printf("\n");
        count++;
        len_num = strlen(number);
        for(i = 0; i < len_num; i++){
            mod4 = (mod4 * 10 + number[i] - '0') % 4;
            mod15 = (mod15 * 10 + number[i] - '0') % 15;
            mod55 = (mod55 * 10 +number[i] - '0') % 55;
            mod100 = (mod100 * 10 +number[i] - '0') % 100;
            mod400 = (mod400 * 10 +number[i] - '0') % 400;
        }
        if((mod4 == 0 && mod100 != 0) || mod400 == 0){
            printf("This is leap year.\n");
            leap = 1;
            flag = 1;
        }
        if(mod15 == 0){
            printf("This is huluculu festival year.\n");
            flag = 1;
        }
        if(leap == 1 && mod55 == 0)
            printf("This is bulukulu festival year.\n");
        if(flag == 0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}

