#include <stdio.h>
#include <string.h>
int main(){
    char ch;
    int flag = 0;
    while(scanf("%c", &ch)!= EOF){
        if(ch == '"' && flag == 0){
            printf("``");
            flag = 1;
        }
        else if(ch == '"' && flag == 1){
            printf("''");
            flag = 0;
        }
        else printf("%c", ch);
    }
    return 0;
}
