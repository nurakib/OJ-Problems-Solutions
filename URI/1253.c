#include <stdio.h>
#include <string.h>
int main(){
    int i, tcase, move, len;
    char line[50];
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%s", &line);
        scanf("%d", &move);
        len = strlen(line);
        for(i = 0; i < len; i++){
            if((line[i] - move) < 65)
                printf("%c", line[i] - move + 26);
            else
                printf("%c", line[i] - move);
        }
        printf("\n");
    }
    return 0;
}
