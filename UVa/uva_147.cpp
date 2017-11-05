#include <bits/stdc++.h>
using namespace std;
#define MAX 30005
int coins[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
int n_coins = sizeof(coins) / sizeof(int);
long long dp[MAX];
void count(){
    dp[0] = 1;
    for(int i = 0; i < n_coins; i++)
        for(int j = coins[i]; j < MAX; j++)
            dp[j] += dp[j - coins[i]];
}
int main(){
    count();
    double take;
    int amnt;
    while(scanf("%lf", &take) == 1 && take != 0.0){
        amnt = (int)((take + 0.004) * 100);
        printf("%6.2f%17lld\n", take, dp[amnt]);
    }
    return 0;
}
