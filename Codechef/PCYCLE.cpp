#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
int n, cnt;
int ar[MAX], vis[MAX];
vector <int> ans[MAX];
void dfs(int v){
    vis[v] = 1;
    ans[cnt].push_back(v);
    if(vis[ar[v]] == 0)
        dfs(ar[v]);
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> ar[i];
    }
    for(int i = 1; i <= n; i++){
        if(vis[i] == 0){
            dfs(i);
            ans[cnt].push_back(i);
            cnt++;
        }
    }
    cout << cnt << "\n";
    for(int i = 0; i < cnt; i++){
        for(int j = 0; j < ans[i]. size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
