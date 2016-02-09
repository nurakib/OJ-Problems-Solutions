#include <stdio.h>
#include <string.h>
int main(){
    int tcase, len, i, flag;
    char line[500];
    scanf("%d", &tcase);
    getchar();
    while(tcase--){
        gets(line);
        flag = 0;
        len = strlen(line);
        for(i = 0; i < len; i++){
            if(flag == 1){
                if(line[i] == ' ' && (line[i + 1] != ' ' && (i + 1) < len))
                    printf("%c", line[i + 1]);
            }
            else if(line[i] >= 97 && line[i] <= 122){
                printf("%c", line[i]);
                flag = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
