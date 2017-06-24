#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    IOS;
    char tmp;
    string s;
    cin >> s;
    if(s.size() == 1){
        cout << s << "\n";
        return 0;
    }
    for(int i = 0; i < s.size() - 2; i += 2){
        for(int j = 0; j < s.size() - 2; j += 2){
            if((s[j] - '0') > (s[j + 2] - '0')){
                tmp = s[j];
                s[j] = s[j + 2];
                s[j + 2] = tmp;
            }
        }
    }
    cout << s << "\n";
    return 0;
}
