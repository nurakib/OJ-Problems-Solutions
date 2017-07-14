#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, cnt, ans;
    string s, tmp;
    cin >> t;
    while(t--){
        tmp = "";
        ans = cnt = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
            if(s[i] != '=') tmp += s[i];
        if(tmp.size() == 0){
            cout << 1 << "\n";
            continue;
        }
        for(int i = 1; i < tmp.size(); i++){
            if(tmp[i] == tmp[i - 1]) cnt++;
            else ans = max(ans, cnt), cnt = 0;
        }
        ans = max(ans, cnt);
        cout << ans + 2 << "\n";
    }
    return 0;
}
