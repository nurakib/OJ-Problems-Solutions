#include <stdio.h>
#include <string.h>
int main(){
    char num, bignum[1000];
    int i, len, flag1, flag2, flag3;
    while(scanf("%c %s", &num, &bignum) == 2 && (num != 48 || strlen(bignum) > 1)){
        getchar();
        flag1 = 0, flag2 = 0, flag3 = 0;
        len = strlen(bignum);
        for(i = 0; i < len; i++){
            if(bignum[i] == num)
                continue;
            else{
                if(flag2 == 1){
                    printf("%c", bignum[i]);
                    continue;
                }
                if(bignum[i] > 48){
                    printf("%c", bignum[i]);
                    flag2 = 1;
                    flag3 = 1;
                }
                flag1 = 1;
            }
        }
        if(flag1 == 0 || flag3 == 0)
            printf("0");
        printf("\n");
    }
    return 0;
}
