#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d", &n) == 1 && n){
        int x, y, cnt1 = 0, cnt2 = 0, num[105][105] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &num[i][j]);
                num[i][n] += num[i][j];
                num[n][j] += num[i][j];
             }
        }
        for(int i = 0; i <= n; i++){
            if(num[i][n] % 2 == 1){
                cnt1++; x = i;
            }
            if(num[n][i] % 2 == 1){
                cnt2++; y = i;
            }
        }
        if(cnt1 == 0 && cnt2 == 0)
            printf("OK\n");
        else if(cnt1 == 1 && cnt2 == 1)
            printf("Change bit (%d,%d)\n", x + 1, y + 1);
        else
            printf("Corrupt\n");
    }
    return 0;
}
