#include <stdio.h>
int main(){
    long long n, result;
    while(scanf("%lld", &n) == 1){
        result = ((n * n * (n + 1) * (n + 1)) / 4);
        printf("%lld\n", result);
    }
    return 0;
}
