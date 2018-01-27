#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt, ans = 0, num[1005];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> num[i];
    for(int i = 0; i < n; i++){
        cnt = 1;
        for(int j = i - 1; j >= 0 && num[j] <= num[j + 1]; j--) cnt++;
        for(int j = i + 1; j < n  && num[j] <= num[j - 1]; j++) cnt++;
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
    return 0;
}
