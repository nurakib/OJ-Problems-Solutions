#include <bits/stdc++.h>
using namespace std;
#define MOD 10000007
#define MAX 10005
int main(){
    int t, n, caseno = 0;
    long long ara[MAX];
    scanf("%d", &t);
    while(t--){
        scanf("%lld %lld %lld %lld %lld %lld %d", &ara[0], &ara[1], &ara[2], &ara[3], &ara[4], &ara[5], &n);
        for(int i = 6; i <= n; i++)
            ara[i] = (ara[i-1] + ara[i-2] + ara[i-3] + ara[i-4] + ara[i-5] + ara[i-6]) % MOD;
        printf("Case %d: %lld\n", ++caseno, ara[n]  % MOD);
    }
    return 0;
}
