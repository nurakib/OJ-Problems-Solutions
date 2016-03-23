#include <stdio.h>
#include <math.h>
int main(){
    int j, num, tcase, temp, check;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d", &num);
        check = sqrt(num);
            temp = 0;
            for(j = 2; j <= check; j++){
                if(num % j == 0){
                    temp = 1;
                    break;
                }
            }
        if(temp == 0)
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);
    }
    return 0;
}
