#include <stdio.h>
#include <string.h>
int main(){
    int tcase, i, len;
    char ch[1500];
    scanf("%d", &tcase);
    getchar();
    while(tcase--){
        gets(ch);
        len = strlen(ch);
        int count[26] = {0}, cnt = 0;
        for(i = 0; i < len; i++){
            if(ch[i] >= 'a' && ch[i] <= 'z')
                count[ch[i] - 'a']++;
        }
        for(i = 0; i <= 25; i++){
            if(count[i] != 0)
                cnt++;
        }
        if(cnt == 26)
            printf("frase completa\n");
        else if(cnt >= 13 && cnt != 26)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }
    return 0;
}
