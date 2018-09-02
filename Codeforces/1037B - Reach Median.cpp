#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, t, arr[200005], ans = 0;
    cin >> n >> t;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);

    if(arr[n / 2] == t) ans = 0;
    else if(arr[n / 2] > t){
        for(int i = n/2; i >= 0; i--){
            if(arr[i] - t > 0) ans += arr[i] - t;
            else break;
        }
    }
    else if(arr[n / 2] < t){
        for(int i = n/2; i < n; i++){
            if(t - arr[i] > 0) ans += t - arr[i];
            else break;
        }
    }
    cout << ans << "\n";
    return 0;
}
