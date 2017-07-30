#include <bits/stdc++.h>
using namespace std;
#define MAX 20000 + 5
#define pb push_back
vector <int> graph[MAX], cost[MAX];
const int INF = 1e9 + 5;

struct data{
    int city, dist;
    bool operator < (const data& p) const{
        return dist > p.dist;
    }
};

int dijkstra(int src, int des){
    int d[MAX];
    for(int i = 0; i <= MAX; i++) d[i] = INF;

    priority_queue <data> q;
    data u, v;
    u.city = src, u.dist = 0;
    q.push(u);
    d[src] = 0;

    while(!q.empty()){
        u = q.top(); q.pop();
        int ucost = d[u.city];
        for(int i = 0; i < graph[u.city].size(); i++){
            v.city = graph[u.city][i];
            v.dist = cost[u.city][i] + ucost;
            if(d[v.city] > v.dist){
                d[v.city] = v.dist;
                q.push(v);
            }
        }
    }
    return d[des];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int u, v, w;
    int tcase, node, edge, src, des, ans;
    cin >> tcase;
    while(tcase--){
        cin >> node >> edge;
        for(int i = 0; i < edge; i++){
            cin >> u >> v >> w;
            graph[u].pb(v);
            cost[u].pb(w);
        }
        cin >> src >> des;
        ans = dijkstra(src, des);
        if(ans != INF) cout << ans << "\n";
        else cout << "NO" << "\n";
        for(int i = 0; i < MAX; i++){
            graph[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
