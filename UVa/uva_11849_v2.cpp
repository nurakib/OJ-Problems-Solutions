#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, tmp, ans;
    map <int, int> mp;
    while(cin >> n >> m){
        ans = 0;
        if(n == 0 && m == 0)
            break;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            mp[tmp] = 1;
        }
        for(int i = 0; i < m; i++){
            cin >> tmp;
            if(mp[tmp] == 1)
                ans++;
        }
        cout << ans << "\n";
        mp.clear();
    }
    return 0;
}
