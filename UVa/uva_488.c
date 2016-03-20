#include <stdio.h>
int main(){
    int tcase, freq, num, i, j, k, count = 0;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d", &num);
        scanf("%d", &freq);
        for(k = 1; k <= freq; k++){
            if(count > 0)
                printf("\n");
            count = 1;
            for(i = 1; i <= num; i++){
                for(j = 0; j < i; j++){
                    printf("%d", i);
                }
                printf("\n");
            }
            for(i = num - 1; i > 0; i--){
                for(j = i; j > 0; j--){
                    printf("%d", i);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
