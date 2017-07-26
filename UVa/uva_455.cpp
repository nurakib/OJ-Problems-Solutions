#include <bits/stdc++.h>
using namespace std;
int PF[10005];
void prefix_function(string s, int sz){
    int i = 1, pos = 0;
    while(i < sz){
        if(s[i] == s[pos])
            PF[i++] = ++pos; //1.pos++; 2.PF[i] = pos; 3.i++;
        else{
            if(pos != 0) pos = PF[pos - 1];
            else PF[i] = 0, i++;
        }
    }
}
int main(){
    int tcase, sz, tmp;
    string s;
    cin >> tcase;
    while(tcase--){
        cin >> s;
        sz = s.size();
        prefix_function(s, sz);
        tmp = sz - PF[sz - 1];
        if(sz % tmp == 0) cout << tmp << "\n";
        else cout << sz << "\n";
        if(tcase) cout << "\n";
    }
    return 0;
}
