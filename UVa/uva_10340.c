#include <stdio.h>
#include <string.h>
int main(){
    int i, j, len1, len2, temp, cnt;
    char word1[100000], word2[100000];
    while(scanf("%s %s", &word1, &word2) == 2){
        cnt = temp = 0;
        len1 = strlen(word1);
        len2 = strlen(word2);
        for(i = 0; i < len1; i++){
            for(j = temp; j < len2; j++){
                if(word1[i] == word2[j]){
                    temp = j + 1;
                    cnt++;
                    break;
                }
            }
        }
        if(cnt == len1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
