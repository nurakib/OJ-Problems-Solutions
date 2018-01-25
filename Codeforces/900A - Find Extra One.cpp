#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, cnt1 = 0, cnt2 = 0;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if((a > 0 && b >= 0) || (a > 0 && b <= 0)) cnt1++;
        else cnt2++;
    }
    //cout << cnt1 << " " << cnt2 << "\n";
    if(cnt1 == 1 || cnt2 == 1 || (cnt1 != 0 && cnt2 == 0) || (cnt1 == 0 && cnt2 != 0)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
