#include <stdio.h>
int main(){
    int tcase = 5, num, count = 0;
    while(tcase--){
        scanf("%d", &num);
        if(num % 2 == 0)
            count++;
    }
    printf("%d valores pares\n", count);
    return 0;
}
