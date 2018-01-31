#include <bits/stdc++.h>
using namespace std;
char grid[2005][2005];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, k, cnt, ans = 0;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) cin >> grid[i];
    for(int i = 0; i < n; i++){
        cnt = 0;
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '.') cnt++;
            else cnt = 0;
            if(cnt >= k) ans++;
        }
    }
    if(k != 1){
        for(int i = 0; i < m; i++){
            cnt = 0;
            for(int j = 0; j < n; j++){
                if(grid[j][i] == '.') cnt++;
                else cnt = 0;
                if(cnt >= k) ans++;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
