#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt1 = 0, cnt2 = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') cnt1++;
        else cnt2++;
    }
    if(cnt1 > cnt2) cout << "Anton\n";
    else if(cnt1 < cnt2) cout << "Danik\n";
    else cout << "Friendship\n";
    return 0;
}
