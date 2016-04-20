    #include <stdio.h>
    #include <string.h>
    int main(){
        int i, j, len, cnt, sp, flag, val;
        char str[10000];
        while(gets(str)){
            len = strlen(str);
            str[len] = ' ';
            cnt = flag = sp = 0;
            for(i = 0; i < len + 1; i++){
                if(str[i] != ' ')
                    cnt++;
                else{
                    flag = i;
                    val = flag - cnt;
                    if(sp > 0)
                        printf(" ");
                    for(j = i - 1; j >= val; j--)
                        printf("%c", str[j]);
                    sp = 1; cnt = 0;
                }
            }
            printf("\n");
        }
        return 0;
    }
