#include <bits/stdc++.h>
using namespace std;
int PF[1000005];
void prefix_function(string s, int sz){
    int i = 1, pos = 0;
    while(i < sz){
        if(s[i] == s[pos]){
            pos++;
            PF[i] = pos;
            i++;
        }
        else{
            if(pos != 0) pos = PF[pos - 1];
            else PF[i] = 0, i++;
        }
    }
}
int main(){
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int sz, tmp;
    string s;
    while(cin >> s){
        if(s == ".") break;
        sz = s.size();
        prefix_function(s, sz);
        tmp = sz - PF[sz - 1];
        //if(sz % tmp != 0) tmp = sz;
        cout << sz / tmp << "\n";
    }
    return 0;
}
