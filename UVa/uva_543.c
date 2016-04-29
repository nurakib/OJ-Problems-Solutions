#include <stdio.h>
#include <math.h>
#define MAX 1000001
char prime[MAX];
void sieve();
void primecheck(long long n);
int main(){
    long long num;
    sieve();
    while(scanf("%d", &num) == 1 && num > 0)
        primecheck(num);
    return 0;
}
void sieve(){
    int i, j, x, n, p;
    n = MAX;
    x = sqrt(n);
    prime[0] = prime[1] = 1;
    for(i = 4; i <= n; i += 2)
        prime[i] = 1;
    for(i = 3; i <= x; i += 2){
        if(prime[i] == 0){
            for(j = i + i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
}
void primecheck(int n){
    long i, flag = 0;
    for(i = 2; i <= n; i++){
        if(prime[i] == 0 && prime [n-i] == 0){
                flag = 1;
                break;
        }
    }
    if(flag)
        printf("%ld = %ld + %ld\n", n, i, n - i);
    else
        printf("Goldbach's conjecture is wrong.\n");
}
