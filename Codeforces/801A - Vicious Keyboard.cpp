#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans = 0, ext = 0;
    string s;
    cin >> s;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'V' && s[i + 1] == 'K') ans++;
        if(s[i] == 'V' && s[i + 1] == 'V' && s[i + 2] != 'K') ext = 1;
        if(s[i] == 'K' && s[i + 1] == 'K' && s[i - 1] != 'V') ext = 1;
    }
    cout << ans + ext << "\n";
    return 0;
}
