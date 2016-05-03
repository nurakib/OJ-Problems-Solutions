#include <stdio.h>
#include <string.h>
int main(){
    char a[1000], c;
    int i, len;
    while(scanf("%s", &a) == 1){
        c = getchar();
        len = strlen(a);
        for(i = len - 1; i >= 0; i--)
            printf("%c", a[i]);
        putchar(c);
    }
    return 0;
}
