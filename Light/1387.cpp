#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, ans, tmp;
    string s;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        ans = 0;
        cout << "Case " << i << ":\n";
        while(n--){
            cin >> s;
            if(s == "donate"){
                cin >> tmp;
                ans += tmp;
            }
            else
                cout << ans << "\n";
        }
    }
    return 0;
}
