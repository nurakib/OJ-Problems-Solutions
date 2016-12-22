#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
int prime[MAX];
void sieve(){
    prime[0] = 1;
    prime[1] = 0;
    for(int i = 4; i <= MAX; i += 2)
        prime[i] = 1;
    for(int i = 3; i * i <= MAX; i += 2){
        if(prime[i] == 0){
            for(int j = i * i; j <= MAX; j += i)
                prime[j] = 1;
        }
    }
}
int main(){
    sieve();
    int n , c, u, v, cnt, fou, tmp[200];
    while(scanf("%d %d", &n, &c) == 2){
        cnt = fou = 0;
        for(int i = 1; i <= n; i++){
            if(prime[i] == 0){
                tmp[fou++] = i;
                cnt++;
            }
        }
        if(cnt % 2) 
            u = fou / 2 - (2 * c - 1) / 2;
        else 
            u = fou / 2 - (2 * c - 1) / 2 - 1;
        v = fou / 2 + (2 * c - 1) / 2;
        if(u < 0 || v > fou) u = 0, v = fou - 1;
        printf("%d %d:", n, c);
        for(int i = u; i <= v; i++)
            printf(" %d", tmp[i]);
        printf("\n\n");
    }
    return 0;
}
