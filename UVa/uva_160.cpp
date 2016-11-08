#include <bits/stdc++.h>
using namespace std;
int cnt[100];
void primefactors(int n){
    while(n % 2 == 0){
        cnt[2]++;
        n /= 2;
    }
    for(int i = 3; i * i <= n; i += 2){
        while(n % i == 0){
            cnt[i]++;
            n /= i;
        }
    }
    if(n > 2)
        cnt[n]++;
}
int primecheck(int m){
    for(int i = 2; i * i <= m; i++)
        if(m % i == 0)
            return 0;
    return 1;
}
int main(){
    int n, nl;
    while(scanf("%d", &n) == 1 && n){
        nl = 0;
        for(int i = 2; i <= n; i++)
            primefactors(i);
        printf("%3d! =", n);
        for(int i = 2; i < 100; i++){
            if(primecheck(i)){
                if(cnt[i] == 0)
                    break;
                if(nl == 15)
                    printf("\n%6c", ' ');
                printf("%3d", cnt[i]);
                cnt[i] = 0;
                nl++;
            }
        }
        printf("\n");
    }
    return 0;
}
