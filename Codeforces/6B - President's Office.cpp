#include <bits/stdc++.h>
using namespace std;
int ans[30];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
char grid[105][105];
int main(){
    char c;
    int n, m, cnt = 0;
    cin >> n >> m >> c;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == c){
                for(int k = 0; k < 4; k++){
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '.' && grid[x][y] != c){
                        ans[grid[x][y] - 'A'] = 1;
                    }
                }
            }
        }
    }
    for(int i = 0; i < 26; i++) cnt += ans[i];
    cout << cnt << "\n";
    return 0;
}
