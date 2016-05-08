#include <stdio.h>
#include <string.h>
int main(){
    int i, j, t, len, sum;
    char temp, word[100];
    scanf("%d\n", &t);
    for(i = 1; i <= t; i++){
        gets(word);
        len = strlen(word);
        sum = 0;
        printf("Case %d: ", i);
        for(j = 0; j < len; j++){
            if(word[j] >= 65 && word[j] <= 90){
                temp = word[j];
                continue;
            }
            while(word[j] >= 48 && word[j] <= 57)
                sum = sum * 10 + word[j++] - '0';
            while(sum--)
                printf("%c", temp);
            sum = 0; j--;
        }
        printf("\n");
    }
    return 0;
}
