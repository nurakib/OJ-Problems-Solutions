#include <bits/stdc++.h>
using namespace std;
int coins[] = {50, 25, 10, 5, 1};
int dp[7500];
void count(){
    dp[0] = 1;
    for(int i = 0; i < 5; i++)
        for(int j = coins[i]; j < 7500; j++)
            dp[j] += dp[j - coins[i]];
}
int main(){
    count();
    int ammnt;
    while(scanf("%d", &ammnt) == 1)
        printf("%d\n", dp[ammnt]);
    return 0;
}
