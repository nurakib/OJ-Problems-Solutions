#include <bits/stdc++.h>
using namespace std;
int main(){
    int tmp, cnt = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            cnt++;
        else if(s[i] >= '0' && s[i] <= '9'){
            tmp = s[i] - '0';
            if(tmp % 2 != 0)
                cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
