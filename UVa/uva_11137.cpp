#include <bits/stdc++.h>
using namespace std;
#define MAX 10005
int coins[] = {1, 2, 3, 4, 5, 6, 7, 8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
int n_coins = sizeof(coins) / sizeof(int);
long long dp[MAX];
void count(){
    dp[0] = 1;
    for(int i = 0; i < n_coins; i++)
        for(int j = coins[i]; j < MAX; j++)
            dp[j] += dp[j - coins[i]];
}
int main(){
    for(int i = 0; i < 21; i++) coins[i] = coins[i] * coins[i] * coins[i];
    count();
    int amnt;
    while(scanf("%d", &amnt) == 1) printf("%lld\n", dp[amnt]);
    return 0;
}
