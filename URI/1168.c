#include <stdio.h>
#include <string.h>
int main(){
    char n;
    int tcase, result, value[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    scanf("%d", &tcase);
    getchar();
    while(tcase--){
        result = 0;
        while((n = getchar()) != '\n'){
            result = result + value[n - '0'];
        }
        printf("%d leds\n", result);
    }
    return 0;
}
