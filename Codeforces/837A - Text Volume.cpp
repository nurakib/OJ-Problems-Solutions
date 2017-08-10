#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt, ans = 0;
    string s;
    cin >> n;
    while(cin >> s){
        cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90)
                cnt++;
            ans = max(ans, cnt);
        }
    }
    cout << ans << "\n";
    return 0;
}
