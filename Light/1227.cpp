#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, p, q, tmp, ans, egg[35];
    cin >> t;
    for(int i = 1; i <= t; i++){
        tmp = ans = 0;
        cin >> n >> p >> q;
        for(int j = 0; j < n; j++)
            cin >> egg[j];
        for(int j = 0; j < n; j++){
            tmp += egg[j];
            egg[j] = tmp;
        }
        for(int j = 0; j < n; j++){
            if(j + 1 <= p && egg[j] <= q)
                ans++;
        }
        cout << "Case " << i << ": " << ans << "\n";
    }
    return 0;
}
