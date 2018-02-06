#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt_up = 0, cnt_low = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90) cnt_up++;
        else cnt_low++;
    }
    if(cnt_up > cnt_low){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 97 && s[i] <= 122) cout << (char)(s[i] - 32);
            else cout << s[i];
        }
    }
    else{
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90) cout << (char)(s[i] + 32);
            else cout << s[i];
        }
    }
    return 0;
}
