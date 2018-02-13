#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans = 0, num[5];
    string s;
    cin >> num[1] >> num[2] >> num[3] >> num[4];
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        ans += num[s[i] - '0'];
    }
    cout << ans << "\n";
    return 0;
}
