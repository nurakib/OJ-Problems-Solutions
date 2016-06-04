#include <stdio.h>
#include <math.h>
int main(){
    int i, num, cnt, flag;
    while(scanf("%d", &num) == 1 && num != 0){
        cnt = 1; flag = 0;
        printf("%d = ", num);
        if(num < 0){
            printf("-1 x ");
            num = num * (-1);
        }
        while(num % 2 == 0){
            if(cnt == 1)
                printf("%d", 2);
            else
                printf(" x %d", 2);
            num = num / 2;
            cnt++;
            flag = 1;
        }
        for(i = 3; i <= sqrt(num); i = i + 2){
            while(num % i == 0){
                if(cnt == 1)
                    printf("%d", i);
                else
                    printf(" x %d", i);
                num = num / i;
                cnt++;
                flag = 1;
            }
        }
        if(num > 2 && flag == 1)
            printf(" x %d", num);
        else if(num > 2 && flag == 0)
            printf("%d", num);
        printf("\n");
    }
    return 0;
}
