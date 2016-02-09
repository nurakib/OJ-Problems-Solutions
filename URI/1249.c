#include <stdio.h>
#include <string.h>
int main(){
    char line[50];
    int len, i;
    while(scanf("%[^\n]", line) == 1){
        getchar();
        len = strlen(line);
        for(i = 0; i < len; i++){
            if(line[i] >= 65 && line[i] <= 90){
                line[i] = line[i] + 13;
                if(line[i] > 90)
                    line[i] = line[i] - 26;
            }
            else if(line[i] >= 97 && line[i] <= 122){
                if(line[i] < 110)
                    line[i] = line[i] + 13;
                else
                    line[i] = line[i] - 13;
            }
            printf("%c", line[i]);
        }
        printf("\n");
    }
    return 0;
}
