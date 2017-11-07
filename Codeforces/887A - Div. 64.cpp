#include <bits/stdc++.h>
using namespace std;
int main(){
    int pos, cnt = 0, fl = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1'){
            pos = i;
            fl = 1;
            break;
        }
    }
    for(int i = pos + 1; i < str.size(); i++) if(str[i] == '0') cnt++;
    if(cnt >= 6 && fl == 1) cout << "yes\n";
    else cout << "no\n";
    return 0;
}
