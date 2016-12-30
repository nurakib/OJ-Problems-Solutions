#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, d, p, x, ans;
    cin >> t;
    while(t--){
        ans = 0;
        int cal[4000] = {0};
        cin >> d >> p;
        for(int i = 0; i < p; i++){
            cin >> x;
            for(int j = x; j <= d; j = j + x)
                cal[j] = 1;
        }
        for(int i = 1; i <= d; i++){
            if((i + 1) % 7 == 0 || i % 7 == 0)
                continue;
            if(cal[i] == 1)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
