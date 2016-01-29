#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int tcase, len, i;
    char line[1000], line2[1000];
    scanf("%d", &tcase);
    getchar();
    while(tcase--){
        gets(line);
        len = strlen(line);
        for(i = 0; i < len; i++){
            if(islower(line[i]) || isupper(line[i]))
                line[i] = line[i] + 3;
        }
        for(i = len; i >= 0 ; i--)
            line2[i] = line[len - i - 1];
        for(i = len; i >= len / 2 ; i--)
            line2[i] = line2[i] - 1;
        for(i = 0; i < len; i++)
            printf("%c", line2[i]);
        printf("\n");
    }
    return 0;
}
