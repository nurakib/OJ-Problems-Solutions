#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, sz, cnt = 0;
    string s;
    vector <int> data[10005];
    cin >> t;
    while(t--){
        for(int i = 0; i < 26; i++){
            data[i].clear();
        }
        cnt = 0;
        cin >> s;
        sz = s.size();
        for(int i = 0; i < sz; i++){
            data[s[i] - 'a'].push_back(i + 1);
        }
        for(int i = 0; i < 26; i++){
            if(data[i].size() % 2 != 0) cnt++;
        }
        if((sz % 2 == 0 && cnt != 0) || (sz % 2 != 0 && cnt != 1)){
            cout << -1 << "\n";
            continue;
        }
        else{
            int rem, fl = -1, pos = 0, ans[sz] = {0};
            for(int i = 0; i < 26; i++){
                if(data[i].size() % 2 == 0 && data[i].size() != 0){
                    int tmp = data[i].size();
                    for(int j = 0; j < tmp / 2; j++){
                        ans[pos] = data[i][j];
                        ans[sz - pos - 1] = data[i][tmp - j - 1];
                        pos++;
                    }
                }
                else if(data[i].size() % 2 != 0){
                    rem = data[i].size();
                    fl = i;
                }
            }
            if(fl != -1){
                for(int i = 0; i < rem; i++){
                    ans[pos] = data[fl][i];
                    pos++;
                }
            }
            for(int i = 0; i < sz; i++) cout << ans[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}
