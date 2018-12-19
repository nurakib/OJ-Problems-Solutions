#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s, tmp_r, tmp_s;
    cin >> t;
    while(t--){
        cin >> s;
        tmp_r = s;
        tmp_s = s;
        reverse(tmp_r.begin(), tmp_r.end());
        sort(tmp_s.begin(), tmp_s.end());
        //cout << tmp << " " << s << endl;
        if(s == tmp_r && s == tmp_s) cout << -1 << "\n";
        else if(s == tmp_r && s != tmp_s) cout << tmp_s << "\n";
        else cout << s << "\n";
    }
    return 0;
}
