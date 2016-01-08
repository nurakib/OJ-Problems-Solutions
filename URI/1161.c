#include <stdio.h>
long long fac(long long a);
int main()
{
    long long M, N;
    while(scanf("%lld %lld", &M, &N) == 2){
        long long a;
        a = fac(M) + fac(N);
        printf("%lld\n", a);
    }
    return 0;
}
 
long long fac(long long a){
    long long f = 1;
    if(a == 1 || a == 0)
        return f;
    else{
        f = a * fac(a - 1);
        return f;
    }
}
