#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 0;
    string tmp, s = "";
    cin >> tmp;
    for(int i = 0; i < tmp.size(); i++){
        s += tmp[i];
        //cout << s << endl;
        if(s.find("Danil") != string::npos) {
                cnt++;
                s = "";
        }
        if(s.find("Olya") != string::npos) {
                cnt++;
                s = "";
        }
        if(s.find("Slava") != string::npos) {
                cnt++;
                s = "";
        }
        if(s.find("Ann") != string::npos) {
                cnt++;
                s = "";
        }
        if(s.find("Nikita") != string::npos) {
                cnt++;
                s = "";
        }
    }
    //cout << cnt << endl;
    if(cnt == 1) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
