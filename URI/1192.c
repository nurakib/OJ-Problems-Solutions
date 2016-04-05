#include <stdio.h>
#include <ctype.h>
int main(){
    int tcase, a, b;
    char ch;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %c %d", &a, &ch, &b);
        if(a == b)
            printf("%d\n", a * b);
        else if(isupper(ch))
            printf("%d\n", b - a);
        else if(islower(ch))
            printf("%d\n", a + b);
    }
    return 0;
}
