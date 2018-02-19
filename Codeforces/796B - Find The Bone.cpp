#include <bits/stdc++.h>
using namespace std;
bool holes[1000005];
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a, b, n, m, k, tmp, ans = 1, fl = 0;
    memset(holes, false, sizeof(holes));
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++){
        cin >> tmp;
        holes[tmp] = true;
    }
    for(int i = 0; i < k; i++){
        cin >> a >> b;
        if(holes[ans] == true){
            fl = 1;
            break;
        }
        if(a == ans && fl == 0) ans = b;
        else if(b == ans && fl == 0) ans = a;
    }
    cout << ans << "\n";
    return 0;
}
