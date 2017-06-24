#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    IOS;
    int n, k, num[105], cnt = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> num[i];
    for(int i = 0; i < n; i++){
        if(num[i] >= num[k - 1] && num[i] != 0)
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
