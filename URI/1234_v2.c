#include <stdio.h>
#include <string.h>
int main(){
    char line[50];
    int len, i, flag = 0;
    while(scanf("%[^\n]", &line) == 1){
        getchar();
        flag = 0;
        len = strlen(line);
        for(i = 0; i < len; i++){
            if(line[i] == ' ')
                printf(" ");
            else{
                if(flag == 0){
                    printf("%c", toupper(line[i]));
                    flag = 1;
                }
                else{
                    printf("%c", tolower(line[i]));
                    flag = 0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}

