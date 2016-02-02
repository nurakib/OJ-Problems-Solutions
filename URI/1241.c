#include <stdio.h>
#include <string.h>
int main(){
    char num1[1000], num2[1000];
    int tcase, len1, len2, i, flag;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%s %s", num1, num2);
        getchar();
        len1 = strlen(num1);
        len2 = strlen(num2);
        flag = 0;
        if(len2 > len1){
            printf("nao encaixa\n");
            continue;
        }
        else if(len1 == len2){
            for(i = 0; i < len1; i++){
                if(num1[i] != num2[i]){
                    printf("nao encaixa\n");
                    continue;
                }
            }
        }
        else{
            for(i = 0; i < len2; i++){
                if(num1[len1 - i - 1] != num2[len2 - i - 1]){
                    flag = 1;
                    printf("nao encaixa\n");
                    break;
                }
            }
        }
        if(flag == 0)
            printf("encaixa\n");
    }
    return 0;
}
