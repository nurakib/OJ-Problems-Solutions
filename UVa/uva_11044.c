#include <stdio.h>
int main(){
    int tcase, a, b;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %d", &a, &b);
        printf("%d\n", (a / 3) * (b / 3));
    }
    return 0;
}
