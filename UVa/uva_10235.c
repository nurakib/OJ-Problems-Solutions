#include <stdio.h>
#include <math.h>
int main(){
    int i, check, num, print_num, fl1, fl2, fl3, res, rev;
    while(scanf("%d", &num) == 1){
        print_num = num;
        fl1 = fl2 = fl3 = rev = res = 0;
        check = sqrt(num);
        for(i = 2; i <= check; i++){
            if(num % i == 0){
                fl1 = 1;
                break;
            }
        }
        if(fl1 == 0){
            while(num != 0){
                res = num % 10;
                rev = rev * 10 + res;
                num = num / 10;
            }
            if(print_num == rev){
                printf("%d is prime.\n", print_num);
                continue;
            }
            check = sqrt(rev);
            for(i = 2; i <= check; i++){
                if(rev % i == 0){
                    fl2 = 1;
                    break;
                }
            }
            if(fl2 == 1)
                printf("%d is prime.\n", print_num);
            else
                printf("%d is emirp.\n", print_num);
        }
        else
            printf("%d is not prime.\n", print_num);
    }
    return 0;
}
