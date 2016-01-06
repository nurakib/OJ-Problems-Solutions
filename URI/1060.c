#include <stdio.h>
int main(){
    int tcase = 6, count = 0;
    float num;
    while(tcase--){
        scanf("%f", &num);
        if(num > 0)
            count++;
    }
    printf("%d valores positivos\n", count);
    return 0;
}
