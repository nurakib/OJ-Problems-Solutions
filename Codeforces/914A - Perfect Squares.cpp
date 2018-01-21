#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, check, ans = -1e7;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        check = sqrt(tmp);
        if(check * check != tmp) ans = max(ans, tmp);
    }
    cout << ans << "\n";
    return 0;
}
