#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long n, m;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        m = 1;
        scanf("%lld", &n);
        if(n % 2 != 0)
            printf("Case %d: Impossible\n", i);
        else{
            while(n % 2 == 0){
                n /= 2;
                m *= 2;
            }
        printf("Case %d: %lld %lld\n", i, n, m);
        }
    }
    return 0;
}
