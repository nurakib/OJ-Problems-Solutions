#include <bits/stdc++.h>
using namespace std;
#define pb push_back
map<string, vector<string> > graph;
map<string, bool> visited;
map<string, int> level;
map<string, string> parent;

void BFS(string src, string des){
    visited[src] = true;
    parent[src] = "-1";
    queue<string> q;
    q.push(src);
    while(!q.empty()){
        string curr = q.front(); q.pop();
        for(int i = 0; i < graph[curr].size(); i++){
            string tmp = graph[curr][i];
            if(!visited[tmp]){
                visited[tmp] = true;
                level[tmp] = level[curr] + 1;
                parent[tmp] = curr;
                q.push(tmp);
            }
        }
    }
    if(!level[des]) cout << "No route";
    else{
        vector<string> path;
        path.pb(des);
        while(des != "-1"){
            des = parent[des];
            path.pb(des);
        }
        for(int i = path.size() - 2; i >= 1; i--){
            cout << path[i] << " " << path[i - 1];
            if(i != 1) cout << "\n";
        }
        graph.clear();
        visited.clear();
        level.clear();
        parent.clear();
    }
}

int main(){
    int n, fl = 0;
    while(cin >> n){
        if(fl) cout << "\n"; fl = 1;
        while(n--){
            string u, v;
            cin >> u >> v;
            graph[u].pb(v);
            graph[v].pb(u);
        }
        string a, b;
        cin >> a >> b;
        BFS(a, b);
        cout << "\n";
    }
    return 0;
}
