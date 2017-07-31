#include <bits/stdc++.h>
using namespace std;
vector <int> graph[205];
int color[205];
bool is_bipartite(int src){
    color[src] = 0;
    queue <int> q;
    q.push(src);
    while(!q.empty()){
        int u = q.front(); q.pop();
        int sz = graph[u].size();
        for(int i = 0; i < sz; i++){
            int v = graph[u][i];
            if(color[v] == -1){
                color[v] = 1 - color[u];
                q.push(v);
            }
            else{
                if(color[u] == color[v])
                    return false;
            }
        }
    }
    return true;
}
int main(){
    int node, edge, u, v;
    while(cin >> node, node){
        memset(color, -1, sizeof(color));
        cin >> edge;
        while(edge--){
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        if(is_bipartite(0) == false) cout << "NOT BICOLORABLE.\n";
        else cout << "BICOLORABLE.\n";
        for(int i = 0; i < 205; i++)
            graph[i].clear();
    }
    return 0;
}
