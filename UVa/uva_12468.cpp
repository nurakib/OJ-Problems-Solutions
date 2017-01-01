#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, ans;
    while(cin >> a >> b){
        if(a == -1 && b == -1)
            break;
        ans = abs(a - b);
        if(ans > 50)
            ans = 100 - ans;
        cout << ans << endl;
    }
    return 0;
}
