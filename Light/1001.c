#include <stdio.h>
#include <math.h>

int main(){
    int tcase, num, i, x, array[23] = {0};
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%d", &num);
        if(num == 0)
            printf("0 0\n");
        else if(num == 20)
            printf("10 10\n");
        else if(num < 11)
            printf("%d %d\n", array[num], abs(num - array[num]));
        else{
            x = 10 - array[num];
            printf("%d %d\n", x, abs(num - x));
        }
        array[num]++;
    }
    return 0;
}
