#include <stdio.h>
#include <string.h>
int main(){
    char num[100];
    int len, i;
    scanf("%s", &num);
    len = strlen(num);
    for(i = 0; i < len; i++)
        printf("%c", num[len - i - 1]);
    printf("\n");
    return 0;
}
