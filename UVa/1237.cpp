#include <bits/stdc++.h>
using namespace std;
#define MAX 10005
int main(){
    int t, n, q, val, cnt, fl, high[MAX], low[MAX];
    string name[MAX];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> name[i] >> low[i] >> high[i];
        cin >> q;
        while(q--){
            cnt = 0;
            cin >> val;
            for(int i = 0; i < n; i++){
                if(val >= low[i] && val <= high[i]) {
                    cnt++;
                    if(cnt == 1) fl = i;
                }
                if(cnt > 1) break;
            }
            if(cnt == 1) cout << name[fl] << "\n";
            else cout << "UNDETERMINED" << "\n";
        }
        if(t) cout << "\n";
    }
    return 0;
}
