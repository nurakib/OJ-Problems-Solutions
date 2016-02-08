#include <stdio.h>
#include <string.h>
int main(){
    char num[100], cent[20];
    int len, len_c, i;
    while(scanf("%[^\n]", &num) == 1){
        getchar();
        scanf("%s", &cent);
        getchar();
        len = strlen(num);
        len_c = strlen(cent);
        printf("$");
        for(i = len; i > 0; i--){
            if(i < len && i % 3 == 0){
                printf(",");
            }
            printf("%c", num[len - i]);
        }
        printf(".");
        if(len_c == 1)
            printf("0%s", cent);
        if(len_c == 2)
            printf("%s", cent);
        printf("\n");
    }
}
