#include <stdio.h>
#include <string.h>
int main(){
    int tcase, len, half_len, i, j;
    char line[1000], result[1000];
    scanf("%d", &tcase);
    getchar();
    while(tcase--){
        gets(line);
        len = strlen(line);
        half_len = len / 2;
        for(i = 0; i < half_len; i++)
            result[i] = line[half_len - i - 1];
        for(i = len, j = half_len; i > half_len; i--, j++)
            result[j] = line[i - 1];
        for(i = 0; i < len; i++)
            printf("%c", result[i]);
        printf("\n");
    }
    return 0;
}
