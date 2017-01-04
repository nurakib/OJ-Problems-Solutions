#include <bits/stdc++.h>
using namespace std;
int main(){
    int fl = 0;
    string s;
    while(getline(cin, s)){
        if(fl) cout << endl;
        int m = 0, cnt[128] = {0};
        for(int i = 0; i < s.size(); i++)
            cnt[s[i] - '\0']++;
        for(int i = 32; i < 128; i++)
            m = max(cnt[i], m);
        for(int i = 1; i <= m; i++){
            for(int j = 127; j >= 32; j--){
                if(cnt[j] == i)
                    cout << j << " " << i << endl;
            }
        }
        fl = 1;
    }
    return 0;
}
