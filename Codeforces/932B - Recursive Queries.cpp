#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int val[MAX];
vector <int> data[11];
int func(int n){
    int res = 1;
    while(n != 0){
        if(n % 10 != 0) res = res * (n % 10);
        n /= 10;
    }
    if(res < 10) return res;
    else return val[res];
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int q, l, r, k, ans;
    for(int i = 1; i < MAX; i++){
        val[i] = func(i);
        data[val[i]].push_back(i);
    }
    cin >> q;
    while(q--){
        cin >> l >> r >> k;
        ans = upper_bound(data[k].begin(), data[k].end(), r) - lower_bound(data[k].begin(), data[k].end(), l);
        cout << ans << "\n";
    }
    return 0;
}
