#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, ans, tmp;
    string str;
    cin >> t;
    while(t--){
        ans = 0;
        tmp = 1;
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'X')
                tmp = 1;
            else{
                ans = ans + tmp;
                tmp++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
