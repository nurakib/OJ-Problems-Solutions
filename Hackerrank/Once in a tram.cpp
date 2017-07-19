#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, tmp, cnt1, cnt2, ans;
    cin >> n;
    i = cnt1 = cnt2 = 0;
    ans = n + 1;
    while(1){
        tmp = ans;
        i = cnt1 = cnt2 = 0;
        while(tmp){
            if(i > 2) cnt1 += tmp % 10;
            else cnt2 += tmp % 10;
            tmp /= 10;
            i++;
        }
        if(cnt1 == cnt2) break;
        else ans++;
    }
    cout << ans << "\n";
    return 0;
}
