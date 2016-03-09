#include <stdio.h>
long summing(long num);
int main(){
    long n, result;
    while(scanf("%ld", &n) == 1 && n > 0){
        result = summing(n);
        while(result >= 10)
            result = summing(result);
        printf("%ld\n", result);
    }
    return 0;
}
long summing(long num){
    long rest, sum = 0;
    while(num != 0){
        rest = num % 10;
        sum = sum + rest;
        num = num / 10;
    }
    return sum;
}
