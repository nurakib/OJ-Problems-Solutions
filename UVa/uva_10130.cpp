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
    int t, n, k, ans, tmp, wgt, wt[MAX], val[MAX];
    scanf("%d", &t);
    while(t--){
        ans = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%d %d", &val[i], &wt[i]);
        scanf("%d", &k);
        while(k--){
            scanf("%d", &wgt);
            tmp = knapsack(wgt, wt, val, n);
            ans += tmp;
        }
        printf("%d\n", ans);
    }
    return 0;
}
