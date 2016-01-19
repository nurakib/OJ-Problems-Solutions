#include <stdio.h>
long long factorial(long long n);
int main(){
    long long n, fac;
    while(scanf("%lld", &n) == 1){
        if(n < 0 && n % 2 != 0){
            printf("Overflow!\n");
            continue;
        }
        else if(n < 0 && n % 2 == 0){
            printf("Underflow!\n");
            continue;
        }
        fac = factorial(n);
        if(fac < 10000)
            printf("Underflow!\n");
        else if(fac == 100001)
            printf("Overflow!\n");
        else
            printf("%lld\n", fac);
    }
    return 0;
}
long long factorial(long long n){
    long long result;
    if(n <= 0 || n == 1)
        result = 1;
    else if(n < 14)
        result = n * factorial(n - 1);
    else
        result = 100001;
    return result;
}
