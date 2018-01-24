#include <bits/stdc++.h>
using namespace std;
#define MAX 10005
int visited[MAX], dist[MAX];
bool isprime(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return false;
    return true;
}
int main(){
    int t, u, v, res;
    cin >> t;
    while(t--){
        cin >> u >> v;
        queue <int> q;
        q.push(u);
        memset(dist, 0, sizeof dist);
        memset(visited, 0, sizeof visited);
        visited[u] = 1;
        res = -1;
        while(!q.empty()){
            int tmp = q.front();
            q.pop();
            if(tmp == v){
                res = dist[v];
                break;
            }
            int x = tmp;
            int num[4];
            for(int i = 3; i >= 0; i--){
                num[i] = x % 10;
                x /= 10;
            }
            //for checking all possible number with 1 digit change
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 10; j++){
                    if(i == 0 && j == 0) continue;
                    x = 0;
                    for(int k = 0; k < 4; k++){
                        if(k == i) x = x * 10 + j;
                        else x = x * 10 + num[k];
                    }
                    if(isprime(x) && !visited[x]){
                        dist[x] = dist[tmp] + 1;
                        q.push(x);
                        visited[x] = 1;
                    }
                }
            }
        }
        if(res == -1) cout << "Impossible" << "\n";
        else cout << res << "\n";
    }
    return 0;
}
