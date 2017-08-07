#include <bits/stdc++.h>
using namespace std;
map <int, int> mp;
int main(){
    int t, n, pos, check;
    cin >> t;
    while(t--){
        int fl = 0, num[105] = {0};
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> num[i];
            mp[num[i]] = 1;
            if(num[i] == 7) pos = i;
        }
        for(int i = 1; i <= 7; i++){
            if(mp[i] == 0) fl = 1;
        }
        if(n == 7 && fl == 0){
            for(int i = 1; i < 7; i++){
                if(num[i] - num[i - 1] > 2){
                    fl = 1;
                    break;
                }
            }
            if(fl == 0){
                cout << "yes\n";
                continue;
            }
        }
        for(int i = 0; i <= n / 2; i++){
            if(num[i] != num[n - i - 1]){
                fl = 1; break;
            }
        }
        if(fl) cout << "no\n";
        else cout << "yes\n";
        mp.clear();
    }
    return 0;
}
