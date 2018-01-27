#include <bits/stdc++.h>
using namespace std;

int cnt, row, col;
char grid[21][21];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void dfs(int x, int y){
    grid[x][y] = '#';
    cnt++;
    for(int i = 0; i < 4; i++){
        int dr = x + dx[i];
        int dc = y + dy[i];
        if(dr >= 0 && dc >= 0 && dr < row && dc < col && grid[dr][dc] == '.')
            dfs(dr, dc);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    for(int cs = 1; cs <= t; cs++){
        scanf("%d %d", &col, &row);
        for(int i = 0; i < row; i++){
            scanf("%s", grid[i]);
        }
        cnt = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == '@'){
                    
                    dfs(i, j);
                    break;
                }
            }
        }
        printf("Case %d: %d\n", cs, cnt);
    }
    return 0;
}
