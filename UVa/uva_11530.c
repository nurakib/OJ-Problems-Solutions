#include <stdio.h>
#include <string.h>
int main(){
    int i, j, tcase, ans, len;
    char ch[100];
    scanf("%d", &tcase);
    getchar();
    for(j = 1; j <= tcase; j++){
        ans = 0;
        gets(ch);
        len = strlen(ch);
        for(i = 0; i < len; i++){
            if(ch[i] == 'a' || ch[i] == 'd' || ch[i] == 'g' || ch[i] == 'j' || ch[i] == 'm' || ch[i] == 'p' || ch[i] == 't' || ch[i] == 'w' || ch[i] == ' ')
                ans += 1;
            else if(ch[i] == 'b' || ch[i] == 'e' || ch[i] == 'h' || ch[i] == 'k' || ch[i] == 'n' || ch[i] == 'q' || ch[i] == 'u' || ch[i] == 'x')
                ans += 2;
            else if(ch[i] == 'c' || ch[i] == 'f' || ch[i] == 'i' || ch[i] == 'l' || ch[i] == 'o' || ch[i] == 'r' || ch[i] == 'v' || ch[i] == 'y')
                ans += 3;
            else if(ch[i] == 's' || ch[i] == 'z')
                ans += 4;
        }
        printf("Case #%d: %d\n", j, ans);
    }
    return 0;
}
