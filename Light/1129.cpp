#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int id, cnt;
struct data{
    int link[11];
    int flag;
}trie[100005];
bool insrt(string s){
    int now = 0, fl = 0;
    for(int i = 0; i < s.size(); i++){
        int ch = s[i] - '0';
        if(trie[now].flag == 1 && fl == 0) return true;
        if(trie[now].link[ch] == -1){
            fl = 1;
            trie[now].link[ch] = ++id;
        }
        now = trie[now].link[ch];
    }
    trie[now].flag = 1;
    if(fl == 0) return true;
    return false;
}
int main(){
    IOS;
    int t, n, tmp;
    string s[100005];
    cin >> t;
    for(int cs = 1; cs <= t; cs++){
        id = 0, tmp = 0;
        memset(trie, -1, sizeof(trie));
        cin >> n;
        for(int i = 0; i < n; i++) cin >> s[i];
        for(int i = 0; i < n; i++) {
            bool check = insrt(s[i]);
            if(check){
                tmp = 1;
                cout << "Case " << cs << ": NO" << "\n";
                break;
            }
        }
        if(tmp == 0) cout << "Case " << cs << ": YES" << "\n";
    }
    return 0;
}
