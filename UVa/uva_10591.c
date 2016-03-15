#include <stdio.h>
long long calc(long long n);
int main(){
    int i, tcase;
    long long num, result;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%lld", &num);
        result = calc(num);
        while(result >= 10)
            result = calc(result);
        if(result == 1)
            printf("Case #%d: %lld is a Happy number.\n", i, num);
        else
            printf("Case #%d: %lld is an Unhappy number.\n", i, num);
    }
    return 0;
}
long long calc(long long n){
    long long res, sum = 0;
    while(n != 0){
        res = n % 10;
        sum = sum + res * res;
        n = n / 10;
    }
    return sum;
}
