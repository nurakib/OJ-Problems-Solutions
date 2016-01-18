#include <stdio.h>
int main(){
    long num1, num2, rem1, rem2, rem3, result;
    while(scanf("%ld %ld", &num1, &num2) == 2){
        if(num1 == 0 && num2 == 0)
            break;
        rem3 = 0;
        result = 0;
        while(num1 || num2){
            rem1 = num1 % 10;
            rem2 = num2 % 10;
            if(rem1 + rem2 + rem3 >= 10)
                result++;
            rem3 = (rem1 + rem2 + rem3) / 10;
            num1 = num1 / 10;
            num2 = num2 / 10;
        }
        if(result == 0)
            printf("No carry operation.\n");
        else if(result == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", result);
    }
    return 0;
}
