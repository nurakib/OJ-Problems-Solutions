#include <bits/stdc++.h>
using namespace std;
#define MAX 505
int main(){
    int col, row, q, x, y, grid[MAX][MAX];
    cin >> row >> col >> q;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> grid[i][j];
    while(q--){
        cin >> x >> y;
        x--; y--;
        if(grid[x][y] == 0) grid[x][y] = 1;
        else grid[x][y] = 0;
        int cnt, ans = 0;
        for(int i = 0; i < row; i++){
            cnt = 0;
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 0) cnt = 0;
                else cnt++;
                ans = max(ans, cnt);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
