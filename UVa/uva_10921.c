#include <stdio.h>
#include <string.h>
int main(){
    char line[30];
    char value[8] = {'2', '3', '4', '5', '6', '7', '8', '9'};
    int i, len;
    while(scanf("%[^\n]", line) == 1){
        getchar();
        len = strlen(line);
        for(i = 0; i < len; i++){
            if(line[i] >= 'A' && line[i] <= 'C')
                line[i] = value[0];
            else if(line[i] >= 'D' && line[i] <= 'F')
                line[i] = value[1];
            else if(line[i] >= 'G' && line[i] <= 'I')
                line[i] = value[2];
            else if(line[i] >= 'J' && line[i] <= 'L')
                line[i] = value[3];
            else if(line[i] >= 'M' && line[i] <= 'O')
                line[i] = value[4];
            else if(line[i] >= 'P' && line[i] <= 'S')
                line[i] = value[5];
            else if(line[i] >= 'T' && line[i] <= 'V')
                line[i] = value[6];
            else if(line[i] >= 'W' && line[i] <= 'Z')
                line[i] = value[7];
        }
        for(i = 0; i < len; i++)
            printf("%c", line[i]);
        printf("\n");
    }
    return 0;
}
