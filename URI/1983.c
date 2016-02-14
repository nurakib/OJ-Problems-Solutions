#include <stdio.h>
int main(){
    int tcase, roll, result_roll;
    float rate, max = 0;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %f", &roll, &rate);
        if(max < rate){
            max = rate;
            result_roll = roll;
        }
    }
    if(max >= 8)
        printf("%d\n", result_roll);
    else
        printf("Minimum note not reached\n");
    return 0;
}
