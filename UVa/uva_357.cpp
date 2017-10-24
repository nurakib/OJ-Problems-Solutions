
#include <bits/stdc++.h>
using namespace std;
#define MAX 30005
int coins[] = {1, 5, 10, 25, 50};
long long dp[30000];
void count(){
    dp[0] = 1;
    for(int i = 0; i < 5; i++)
        for(int j = coins[i]; j < MAX; j++)
            dp[j] += dp[j - coins[i]];
}
int main(){
    count();
    int amnt;
    while(scanf("%d", &amnt) == 1){
        if(dp[amnt] > 1)
            printf("There are %lld ways to produce %d cents change.\n", dp[amnt], amnt);
        else
            printf("There is only 1 way to produce %d cents change.\n", amnt);
    }
    return 0;
}
