#include <stdio.h>
#include <string.h>
int main(){
    int tcase, i, j, k, len, count[26] = {0}, max;
    char line[1000];
    scanf("%d\n", &tcase);
    while(tcase--){
        scanf("%[^\n]", &line);
        getchar();
        len = strlen(line);
        for(i = 0; i < len; i++){
            if(line[i] >= 97 && line[i] <= 122)
                line[i] = line[i] - 32;
        }
        for(i = 0; i < len; i++)
            count[line[i] - 'A']++;
    }
    max = 0;
    for(i = 65, j = 0; i <= 90; i++, j++){
            if(count[j] >= max)
                max = count[j];
        }
    for(k = max; k > 0; k--){
        for(i = 65, j = 0; i <= 90; i++, j++){
            if(count[j] == k)
                printf("%c %d\n", i, count[j]);
        }
    }
    return 0;
}
