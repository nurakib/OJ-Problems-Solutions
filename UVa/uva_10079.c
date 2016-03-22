#include <stdio.h>
int main(){
    long long n, sum;
    while(scanf("%lld", &n) == 1){
        if(n >= 0 && n <= 210000000){
            sum =((n * (n + 1)) / 2) + 1;
            printf("%lld\n", sum);
        }
        else
            break;
    }
    return 0;
}
