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
                    if(line[i] >= 97 && line[i] <= 122)
                        printf("%c", line[i] - 32);
                    else
                        printf("%c", line[i]);
                    flag = 1;
                }
                else if(flag == 1){
                    if(line[i] >= 65 && line[i] <= 90)
                        printf("%c", line[i] + 32);
                    else
                        printf("%c", line[i]);
                    flag = 0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
