#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, prev = 0, cnt = 0, ans = 0;
    cin >> n;
    while(n--){
        cin >> tmp;
        cnt += tmp;
        if(cnt < prev){
            ans++;
            prev = cnt;
        }
    }
    cout << ans << "\n";
    return 0;
}
