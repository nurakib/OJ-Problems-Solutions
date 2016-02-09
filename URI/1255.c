#include <stdio.h>
#include <string.h>
int main(){
    int tcase, i, j, len;
    char line[200];
    scanf("%d", &tcase);
    getchar();
    while(tcase--){
        gets(line);
        int count[255] = {0}, max;
        len = strlen(line);
        for(i = 0; i < len; i++){
            if(line[i] >= 65 && line[i] <= 90)
                line[i] = line[i] + 32;
        }
        for(i = 0; i < len; i++)
            count[line[i] - 'a']++;
        max = count[0];
        for(i = 97, j = 0; i <= 122; i++, j++){
            if(max < count[j])
                max = count[j];
        }
        for(i = 97, j = 0; i <= 122; i++, j++){
            if(count[j] == max)
                printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}
