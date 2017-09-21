#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
int knapsack(int wgt, int wt[], int val[], int n){
    int dp[n + 1][wgt + 1];
    for(int i = 0; i <= n; i++){
        for(int w = 0; w <= wgt; w++){
            if(i == 0 || w == 0)
                dp[i][w] = 0;
            else if(wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][wgt];
}
int main(){
    int t, n, wgt, wt[MAX], val[MAX];
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &wgt);
        for(int i = 0; i < n; i++) scanf("%d %d", &wt[i], &val[i]);
        printf("%d\n", knapsack(wgt, wt, val, n));
    }
    return 0;
}
