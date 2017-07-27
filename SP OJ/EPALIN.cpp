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
    string s, rev, con;
    while(cin >> s){
        rev = s;
        reverse(rev.begin(), rev.end());
        con = rev + s;
        sz = con.size();
        prefix_function(con, sz);
        tmp = PF[sz - 1];
        cout << s;
        for(int i = tmp; i < rev.size(); i++)
            cout << rev[i];
        cout << "\n";
    }
    return 0;
}

