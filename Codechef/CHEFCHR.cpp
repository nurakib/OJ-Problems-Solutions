#include <bits/stdc++.h>
using namespace std;
int main(){
    //ios::sync_with_stdio(false); cin.tie(0);
    int t, cnt;
    string s, tmp;
    cin >> t;
    while(t--){
        cnt = 0;
        cin >> s;
        if(s.size() < 4){
            cout << "normal\n";
            continue;
        }
        for(int i = 0; i < s.size() - 3; i++){
            tmp = s.substr(i, 4);
            sort(tmp.begin(), tmp.end());
            if(tmp == "cefh") cnt++;
        }
        if(cnt == 0) cout << "normal" << "\n";
        else cout << "lovely " << cnt << "\n";
    }
    return 0;
}
