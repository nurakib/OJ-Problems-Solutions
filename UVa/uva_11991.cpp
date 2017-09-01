#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
vector <int> ans[MAX];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, k, v, tmp;
    while(cin >> n >> m){
        for(int i = 1; i <= n; i++){
            cin >> tmp;
            ans[tmp].push_back(i);
        }
        for(int i = 1; i <= m; i++){
            cin >> k >> v;
            if(k > ans[v].size()) cout << 0 << "\n";
            else cout << ans[v][k - 1] << "\n";
        }
        ans[MAX].clear();
    }
    return 0;
}
